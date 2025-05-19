#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum;
    
    if (std::cin >> item) { // first transaction is valid
        sum = item; // add the transaction

        while (std::cin >> item) {
            if (sum.isbn() == item.isbn()) 
                sum += item;
            else 
                std::cerr << "Invalid input: Data must refer to same ISBN " << std::endl;
        } // if EOF reached

        std::cout << sum << std::endl;

    }

    return 0;
}