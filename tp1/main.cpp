#include <iostream>
#include "book.h"

int main()
{
    struct Book book;
    int n = 1500;
    int *p = &n;
    int &r = n;
    std::cout << "local var: " << book.read();
    std::cout << "address: " << book.read(p);
    std::cout << "value: " << book.read1(n);
    std::cout << "reference: " << book.read(r);
}