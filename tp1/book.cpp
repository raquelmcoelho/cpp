#include <iostream>
#include "book.h"
#include <string.h>

Book::Book()
{
  strcpy(title, "-");
  pagesAmount = MIN_PAGE;
}

Book::Book(const char newTitle[MAX_TITLE], int newPagesAmount)
{
  strcpy(title, newTitle);
  pagesAmount = isPageAmountValid(newPagesAmount) ? newPagesAmount : MIN_PAGE;
}

int readAmountOfPages()
{
  int n;
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> n;
  } while (!isPageAmountValid(n));
  return n;
}

int readAmountOfPages(int *n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> *n;
  } while (!isPageAmountValid(*n));

  return *n;
}

int MyNamespace1::readAmountOfPages(int n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> n;
  } while (!isPageAmountValid(n));

  return n;
}

int MyNamespace2::readAmountOfPages(int &n)
{
  do
  {
    std::cout << "insert the number of pages (from 2 to 2000):" << std::endl;
    std::cin >> n;
  } while (!isPageAmountValid(n));

  return n;
}

Book createBookByInput()
{
  std::string title;
  int pagesAmount;

  do
  {
    std::cout
        << "Insert the right length (max "
        << MAX_TITLE
        << " characters) title of the book:"
        << std::endl;

    std::cin >> title;

  } while (title.length() > MAX_TITLE);

  pagesAmount = readAmountOfPages();

  return Book(title.c_str(), pagesAmount);
}

void fillBookGroup(Book bookGroup[], int n)
{
  while (n--)
  {
    bookGroup[n] = createBookByInput();
  }
}

void display(Book book)
{
  std::cout << "| Title: " << book.title << " | Pages: " << book.pagesAmount << std::endl;
}

void displayBookGroup(Book bookGroup[], int size)
{
  std::cout << std::endl;
  for (int i = 0; i < size; ++i)
  {
    std::cout << "Book " << i + 1 << std::endl;
    display(bookGroup[i]);
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

bool isPageAmountValid(int n)
{
  return n >= MIN_PAGE && n <= MAX_PAGE;
}