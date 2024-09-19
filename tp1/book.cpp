#include <iostream>
#include "book.h"
#include <string.h>

int readAmountOfPages()
{
  int n;
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> n;
  } while (n > 2000 || n < 2);
  return n;
}

int readAmountOfPages(int *n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> *n;
  } while (*n > 2000 || *n < 2);

  return *n;
}

int MyNamespace1::readAmountOfPages(int n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> n;
  } while (n > 2000 || n < 2);

  return n;
}

int MyNamespace2::readAmountOfPages(int &n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> n;
  } while (n > 2000 || n < 2);

  return n;
}

Book::Book()
{
  strcpy(title, "empty");
  pagesAmount = 0;
}

Book createBookByInput()
{
  std::string title;
  int pagesAmount;

  do
  {
    std::cout << "Insert the right length (max 50 characters) title of the book:" << std::endl;
    std::cin >> title;
    // TODO: check if the title is not empty and has less than 50 characters and has no spaces
  } while (title.length() > 50);

  pagesAmount = readAmountOfPages();
  // TODO: check if is a number and if estoura bitsegmentation fault

  return Book(title.c_str(), pagesAmount);
}

Book::Book(const char newTitle[50], int newPagesAmount)
{
  strcpy(title, newTitle);
  // TODO: check size validation
  pagesAmount = newPagesAmount;
}

Book *createBookGroup(int n)
{
  Book *bookGroup = new Book[n];
  while (n--)
  {
    bookGroup[n] = createBookByInput();
  }

  return bookGroup;
}

/*
2.3 Affichage
Programmez une fonction qui affiche un livre donné en argument, et une fonction qui
affiche tous les livres d’un tableau (donné avec sa taille).
*/
void Book::display()
{
  std::cout << "| Title: " << title << " | Pages: " << pagesAmount << std::endl;
}

void displayBookGroup(Book bookGroup[], int size)
{
  std::cout << std::endl;
  for (int i = 0; i < size; ++i)
  {
    std::cout << "Book " << i + 1 << std::endl;
    bookGroup[i].display();
  }
  std::cout << std::endl;
}

void swapPageAmounts(Book &book1, Book &book2)
{
  std::swap(book1.pagesAmount, book2.pagesAmount);
}

Book &getMaxPageAmount(Book books[], int size)
{
  int max = INT16_MIN;
  int indexOfMax = -1;

  for (int i = 0; i < size; ++i)
  {
    if (books[i].pagesAmount > max)
    {
      max = books[i].pagesAmount;
      indexOfMax = i;
    }
  }

  return books[indexOfMax];
}

Book &getMinPageAmount(Book books[], int size)
{
  int min = INT16_MAX;
  int indexOfMin = -1;

  for (int i = 0; i < size; ++i)
  {
    if (books[i].pagesAmount < min)
    {
      min = books[i].pagesAmount;
      indexOfMin = i;
    }
  }

  return books[indexOfMin];
}

void joke(Book books[], int size)
{
  swapPageAmounts(
      getMaxPageAmount(books, size),
      getMinPageAmount(books, size));
}

void jokeAgain(Book books[], int size)
{

  Book &max = getMaxPageAmount(books, size);
  Book &min = getMinPageAmount(books, size);

  swapPageAmounts(
      max,
      min);
}