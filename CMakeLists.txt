
# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(CalculatorTests)

# Include directories for CppUTest headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/CppUTest/include)

# Add the CppUTest library
add_library(CppUTest STATIC CppUTest/src/CppUTest/TestHarness.cpp)

# Add the executable target for the calculator tests
add_executable(calculator_tests test/calculator_test.cpp)

# Link the CppUTest library with the calculator tests target
target_link_libraries(calculator_tests CppUTest)

# Enable CppUTest's automatic discovery of tests
add_test(NAME calculator_tests COMMAND calculator_tests)
