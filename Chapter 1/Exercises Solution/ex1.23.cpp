#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, current;
    
    if (std::cin >> item) { // first transaction is valid
        int count = 1;

        while (std::cin >> current) {
            if (current.isbn() == item.isbn()) 
                count++;
            else {
                std::cout << "The number of transactions for " << item.isbn() << " is " << count << std::endl;
                count = 1;

                item = current;

            }
        } // if EOF reached

        std::cout << "The number of transactions for " << item.isbn() << " is " << count << std::endl;

    }

    return 0;
}