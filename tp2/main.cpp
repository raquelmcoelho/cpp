#include "complex.h"
#include <iostream>
using namespace std;

int main()
{
    Complex c1(1, 4);
    Complex c2(2, 3);

    product(c1, c2).print();
    sum(c1, c2).print();
    difference(c1, c2).print();
}