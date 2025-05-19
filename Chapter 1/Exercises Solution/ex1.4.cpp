#include <iostream>

int main() {
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number: "; // We removed std::endl to keep the input on the same line

    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;

    return 0;
}