
// calculator.cpp
#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    // Avoid division by zero for simplicity in this example
    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            return 0; // Handle division by zero
        }
    }
};

int main() {
    Calculator calc;

    // Example usage
    std::cout << "Addition: " << calc.add(5, 3) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(5, 3) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(5, 3) << std::endl;
    std::cout << "Division: " << calc.divide(6, 3) << std::endl;

    return 0;
}
