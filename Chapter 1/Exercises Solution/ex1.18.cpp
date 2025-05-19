#include <iostream>

int main() {
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number: "; 
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (num1 > num2) {
        while (num1 >= num2) {
            std::cout << num2 << std::endl;
            num2++;
        }
    } else {
        while (num1 <= num2) {
            std::cout << num1 << std::endl;
            num1++;
        }
    }

    return 0;
}