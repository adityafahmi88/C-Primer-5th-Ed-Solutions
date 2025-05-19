#include <iostream>

int main() {
    int num = 50; // since the enumeration starts with 50
    int sum = 0;

    while (num <= 100) { // or num < 101 
        sum += num;

        num++;
    }

    std::cout << "Sum from 50 to 100 is: " << sum << std::endl;

    return 0;
}