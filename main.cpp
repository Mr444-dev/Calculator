//My Libraries
#include <iostream>
#include <limits>

int main() {
    double num1, num2;
    char operation;
    double result;

    std::cout << "--Calculator--" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter first number: ";

    // Get first number with input validation
    while (!(std::cin >> num1)) {
        std::cout << "Error - Invalid input. Please enter a number: ";
        std::cin.clear(); // Clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
    }

    // Get operator with input validation
    std::cout << "Enter an arithmetic operator (+, -, *, /): ";
    while (true) {
        std::cin >> operation;
        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            break;
        } else {
            std::cout << "Error: Invalid operator. Please enter +, -, *, or /: ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get second number with input validation
    std::cout << "Enter second number: ";
    while (!(std::cin >> num2)) {
        std::cout << "Error - Invalid input. Please enter a second number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    bool error = false;

    // Perform calculation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "Error: Cannot divide by zero!" << std::endl;
                error = true;
            }
            break;
        default:

            std::cerr << "Error: An unexpected operator error occurred." << std::endl;
            error = true;
            break;
    }

    std::cout << std::endl;

    // Display result if no error occurred
    if (!error) {
        std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
    }

    // Return 1 on error, 0 on success
    return error ? 1 : 0;
}