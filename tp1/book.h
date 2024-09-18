#ifndef BOOK_H
#define BOOK_H

#include <iostream>

struct Book
{
public:
    char _title[50];
    int _pagesAmount;

    Book(char title[50], int pagesAmount);
    static Book createByInput();
    // int read();
    // int read(int n);
    // int read(int *n);
    // int read(int &n);
};

namespace MyNamespace1
{
    int read();
    int read(int *n);
    int read(int n);
}

namespace MyNamespace2
{
    int read(int &n);
}

#endif