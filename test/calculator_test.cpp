
// calculator_test.cpp
#include "../CppUTest/src/CppUTest/TestHarness.cpp"

#include "../src/calculator.cpp"

TEST_GROUP(Calculator) {
    Calculator calc;
};

TEST(Calculator, Addition) {
    CHECK_EQUAL(8, calc.add(5, 3));
}

TEST(Calculator, Subtraction) {
    CHECK_EQUAL(2, calc.subtract(5, 3));
}

TEST(Calculator, Multiplication) {
    CHECK_EQUAL(15, calc.multiply(5, 3));
}

TEST(Calculator, Division) {
    CHECK_EQUAL(2, calc.divide(6, 3));
}

TEST(Calculator, DivisionByZero) {
    CHECK_EQUAL(0, calc.divide(6, 0));
}
