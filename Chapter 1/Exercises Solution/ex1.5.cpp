#include <iostream>

int main() {
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number: "; 

    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "The product of ";
    std::cout << num1;
    std::cout << " and ";
    std::cout << num2;
    std::cout << " is ";
    std::cout << num1 * num2 << std::endl;

    return 0;
}