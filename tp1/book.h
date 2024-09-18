#include <iostream>

struct Book
{
    char title[50];
    int pageNumber;

    int read();
    int read(int *n);
    int read1(int n);
    int read(int &n);
};
