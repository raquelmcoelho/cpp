#include <iostream>
#include "book.h"

int main()
{
    // int n;
    // int *p = &n;
    // int &r = n;
    // std::cout << "Getting by local var: \n";
    // MyNamespace1::read();
    // std::cout << "Getting by address: \n";
    // MyNamespace1::read(p);
    // std::cout << "Getting by value: \n";
    // MyNamespace1::read(n);
    // std::cout << "Getting by reference: \n";
    // MyNamespace2::read(r);

    // Book *books = createBookGroup(3);
    // displayBookGroup(books, 3);

    Book bookGroups[] = {
        Book("A", 765),
        Book("B", 2000),
        Book("C", 686),
        Book("D", 100),
        Book("E", 2),
        Book("F", 98),
    };

    getMaxPageAmount(bookGroups, sizeof(bookGroups) / sizeof(Book)).display();
    getMinPageAmount(bookGroups, sizeof(bookGroups) / sizeof(Book)).display();
}