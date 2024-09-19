#include <iostream>
#include "book.h"
#include <string.h>

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

Book Book::createByInput()
{
  char title;
  int pagesAmount;

  std::cout << "Insert the title of the book: ";
  std::cin >> title;
  // TODO: validar o tamanho da entrada
  std::cout << "Insert the amount of pages of the book: ";
  std::cin >> pagesAmount;

  return Book(title, pagesAmount);
}

Book::Book(char title[50], int pagesAmount)
{
  strcpy(_title, title);
  _pagesAmount = pagesAmount;
}


void Book::createBookGroup(int n) {
  Book bookGroup[n];
  while(n--){
    std::cout << "Write the name of the next book to put inside bookGroup:";
    std::cin >> bookGroup[n];
    std::cout << endl;
  }
}