#include <iostream>
#include "book.h"

int main()
{
    int n;
    int *p = &n;
    int &r = n;
    std::cout << "Getting by local var: \n";
    MyNamespace1::read();
    std::cout << "Getting by address: \n";
    MyNamespace1::read(p);
    std::cout << "Getting by value: \n";
    MyNamespace1::read(n);
    std::cout << "Getting by reference: \n";
    MyNamespace2::read(r);
}