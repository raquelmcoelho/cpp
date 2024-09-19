
#include <string.h>
#include <iostream>
#include  <bits/stdc++.h>

struct Book
{
public:
    char _title[50];
    int _pagesAmount;

    Book();
    Book(const char title[50], int pagesAmount);
    static Book createByInput();
    // int read();
    // int read(int n);
    // int read(int *n);
    // int read(int &n);

    static void createBookGroup(int n);
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


Book::Book() {
    strcpy(_title, "empty");
    _pagesAmount = 0;
}
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
  std::string title;
  int pagesAmount;

  do {
      std::cout << "Insert the title of the book: \n";
     std::cin >> title;
  
  // TODO: validar o tamanho da entrada
  } while(title.length() > 50);
  
  std::cout << "Insert the amount of pages of the book: ";
  std::cin.clear();
  std::cin >> pagesAmount;

  return Book(title.c_str(), pagesAmount);
      
}

Book::Book(const char title[50], int pagesAmount)
{
  strcpy(_title, title);
  _pagesAmount = pagesAmount;
}

void Book::createBookGroup(int n) {
  Book bookGroup[n];
  while(n--){
    bookGroup[n] = Book::createByInput();
  }
}

int main()
{
    int n;
    int *p = &n;
    int &r = n;
    // std::cout << "Getting by local var: \n";
    // MyNamespace1::read();
    // std::cout << "Getting by address: \n";
    // MyNamespace1::read(p);
    // std::cout << "Getting by value: \n";
    // MyNamespace1::read(n);
    // std::cout << "Getting by reference: \n";
    // MyNamespace2::read(r);
    
    
    Book::createBookGroup(3);
}