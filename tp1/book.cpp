#include <iostream>
#include "book.h"

int MyNamespace1::read()
{
  int n;
  do
  {
    std::cout << "\tinsert the number of pages (from 2 to 2000):";
    std::cin >> n;
  } while (n > 2000 || n < 2);
  return n;
}

int MyNamespace1::read(int *n)
{
  do
  {
    std::cout << "\tinsert the number of pages (from 2 to 2000):";
    std::cin >> *n;
  } while (*n > 2000 || *n < 2);

  return *n;
}

int MyNamespace1::read(int n)
{
  do
  {
    std::cout << "\tinsert the number of pages (from 2 to 2000):";
    std::cin >> n;
  } while (n > 2000 || n < 2);

  return n;
}

int MyNamespace2::read(int &n)
{
  do
  {
    std::cout << "\tinsert the number of pages (from 2 to 2000):";
    std::cin >> n;
  } while (n > 2000 || n < 2);

  return n;
}