#ifndef BOOK_H
#define BOOK_H

#include <iostream>

/*
2. Programmation : Livres
 Nous allons manipuler une structure représentant des livres. Rien de très compliqué :
seuls les titres et nombres de pages nous intéressent.
*/

struct Book
{
public:
    char title[50];
    int pagesAmount;

    Book();
    Book(const char newTitle[50], int newPagesAmount);

    void display();
};

int readAmountOfPages();
int readAmountOfPages(int *n);

namespace MyNamespace1
{

    int readAmountOfPages(int n);
}

namespace MyNamespace2
{
    int readAmountOfPages(int &n);
}

Book createBookByInput();
Book *createBookGroup(int n);
void displayBookGroup(Book bookGroup[], int size);
void swapPageAmounts(Book &book1, Book &book2);
Book getMaxPageAmount(Book books[], int size);
Book getMinPageAmount(Book books[], int size);

#endif