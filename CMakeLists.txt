
# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(CalculatorTests)

# Include directories for CppUTest headers
include_directories(${CPPUTEST_HOME}/include)
#set(CMAKE_CURRENT_SOURCE_DIR "var/lib/jenkins/workspace/calculatorPipeline")
# Add the CppUTest library
#add_library(CppUTest STATIC CppUTest/TestHarness.h)

# Add the executable target for the calculator tests
add_executable(calculator 
              ${CMAKE_CURRENT_SOURCE_DIR}/src/calculator.cpp
)

add_executable(calculator_test 
                            ${CMAKE_CURRENT_SOURCE_DIR}/test/calculator_test.cpp
                            
)

# Link the CppUTest library with the calculator tests target
##target_link_libraries(calculator_tests PRIVATE CppUTest)

# Enable CppUTest's automatic discovery of tests
add_test(NAME calculator_tests COMMAND calculator_tests)




