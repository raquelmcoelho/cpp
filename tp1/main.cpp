#include <iostream>
#include "book.h"

/*
Dans tous les cas, soyez joueurs et testez chacune
des versions dans votre programme
principal pour lire 4 nombres de pages.
*/
void testPageInput()
{
    int n;
    int *p = &n;
    int &r = n;
    std::cout << "Getting by local var:" << std::endl;
    readAmountOfPages();
    std::cout << "Getting by address:" << std::endl;
    readAmountOfPages(p);
    std::cout << "Getting by value:" << std::endl;
    MyNamespace1::readAmountOfPages(n);
    std::cout << "Getting by reference:" << std::endl;
    MyNamespace2::readAmountOfPages(r);
}

/* Testing Fill Group */
void testFillGroup()
{
    Book books[3];
    fillBookGroup(books, sizeof(books) / sizeof(Book));
    displayBookGroup(books, sizeof(books) / sizeof(Book));
}

/*
Remarque importante : En phase de mise au point, la saisie répétée au clavier peut être
fastidieuse. Deux solutions s’offrent à vous : la redirection de l’entrée standard depuis
un fichier texte (< en bash) ou bien l’initialisation d’un tableau de structures dans votre
code source, comme dans le listing 2,
*/
void testJokes()
{
    Book bookGroups[] = {
        Book("A", 765),
        Book("B", 2000),
        Book("C", 686),
        Book("D", 100),
        Book("E", 2),
        Book("F", 98),
    };

    /* Testing Jokes */
    displayBookGroup(bookGroups, sizeof(bookGroups) / sizeof(Book));
    joke(bookGroups, sizeof(bookGroups) / sizeof(Book));
    displayBookGroup(bookGroups, sizeof(bookGroups) / sizeof(Book));
    jokeAgain(bookGroups, sizeof(bookGroups) / sizeof(Book));
    displayBookGroup(bookGroups, sizeof(bookGroups) / sizeof(Book));
}

/* Testing Swap */
void testSwap()
{
    // swapPageAmounts(createBookByInput(), createBookByInput());
}

int main()
{
}