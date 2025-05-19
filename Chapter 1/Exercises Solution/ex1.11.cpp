#include <iostream>

int main() {
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number: "; 

    std::cin >> num1;

    std::cout << "Enter the second number (must be bigger than " << num1 << "): ";
    std::cin >> num2;


    while (num1 <= num2) {
        std::cout << num1 << std::endl;
        num1++;
    }

    return 0;
}