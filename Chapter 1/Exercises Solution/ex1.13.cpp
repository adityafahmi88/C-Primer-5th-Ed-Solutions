#include <iostream>

int main() {
    int sum = 0;

    for (int num = 50; num <= 100; num++) { // or num < 101 
        sum += num;
    }

    std::cout << "Sum from 50 to 100 is: " << sum << std::endl;


    for (int num = 10; num >= 0; num--) { // or num > -1 
        std::cout << num << std::endl;
    }


    return 0;
}