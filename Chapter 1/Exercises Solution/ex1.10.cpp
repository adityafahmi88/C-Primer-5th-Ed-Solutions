#include <iostream>

int main() {
    int num = 10; // since the enumeration starts with 10

    while (num >= 0) { // or num > -1 
        std::cout << num << std::endl;

        num--;
    }


    return 0;
}