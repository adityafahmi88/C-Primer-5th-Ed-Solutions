#include <iostream>

int main() {
    int sum = 0; 
    int num = 0;

    std::cout << "Enter a number: ";


    while(std::cin >> num) {
        std::cout << sum << " + " << num << " = " << sum + num << std::endl;

        sum += num;

        std::cout << "Enter a number: ";
    }

    return 0;
}