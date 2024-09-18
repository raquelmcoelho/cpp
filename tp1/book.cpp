#include <iostream>
#include "book.h"

int Book::read()
{
  int n;
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):\n";
    std::cin >> n;
  } while (n > 2000 || n < 2);
  return n;
}

int Book::read(int *n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):\n";
    std::cin >> *n;
  } while (*n > 2000 || *n < 2);
}

int Book::read1(int n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):\n";
    std::cin >> n;
  } while (n > 2000 || n < 2);
}

// namespace value{
int Book::read(int &n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):\n";
    std::cin >> n;
  } while (n > 2000 || n < 2);
}
// }