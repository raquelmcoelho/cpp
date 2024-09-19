#ifndef BOOK_H
#define BOOK_H

#include <iostream>

/*
2.1 Structure de donnée
Définissez une structure C++ Book dont le titre est une chaîne d’au plus 50 caractères,
et le nombre de pages un entier.
*/

struct Book
{
public:
    char title[50];
    int pagesAmount;

    Book();
    Book(const char newTitle[50], int newPagesAmount);
};

/*
2.2 Saisie
2.2.1 Validation de saisie
Nous allons par la suite saisir au clavier des livres. Pour ce qui est du nombre de pages,
les valeurs inférieures à 2 ou supérieures à 2000 n’ont pas de sens. Vous allez écrire 4
versions d’une fonction de lecture (depuis l’entrée standard) de nombres entiers p, 2 ≤
p ≤ 2000. Simplement, chaque fonction lit au clavier un nombre, depuis le flux d’entrée
cin, jusqu’à ce qu’il soit valide. Attention, toutes les fonctions auront le même nom (=
surcharge).
*/

/*La première retourne le nombre lu.*/
int readAmountOfPages();

/*La seconde modifie son argument qui est passé par adresse*/
int readAmountOfPages(int *n);

/* b) Résolvez le problème en utilisant un espace de noms. */
namespace MyNamespace1
{

    /*La troisième modifie son argument qui est passé par valeur.*/
    int readAmountOfPages(int n);
}

/* b) Résolvez le problème en utilisant un espace de noms. */
namespace MyNamespace2
{
    /*La quatrième modifie son argument qui est passé par référence*/
    int readAmountOfPages(int &n);
}

/*
2.2.2 Saisie de livres
Programmez une fonction qui retourne un livre dont le titre et nombre de pages (valide)
sont lus au clavier.
*/
Book createBookByInput();

/*
2.2.3 Saisie d’une liste de livres
Programmez une fonction qui prend comme arguments un tableau de livres et un entier
(la taille du tableau), qui remplit le tableau avec des livres lus au clavier grâce à la
fonction précédente.
*/
void fillBookGroup(Book bookGroup[], int n);

/*
2.3 Affichage
Programmez une fonction qui affiche un livre donné en argument, et une fonction qui
affiche tous les livres d’un tableau (donné avec sa taille).
*/
void display(Book book);
void displayBookGroup(Book bookGroup[], int size);

/*
2.4.1 Échange
Programmez une fonction prenant en arguments deux livres et qui échange leur nombre
de pages. Pensez bien au type des arguments, qui doit être en rapport avec l’objectif de
ce TP !
*/
void swapPageAmounts(Book &book1, Book &book2);

/*
2.4.2 Livre le plus long/court
Programmez deux fonctions qui prennent comme arguments un tableau de livres et sa
taille et qui retournent le livre le plus long (respectivement le plus court 1) du tableau.
Attention, ces deux fonctions devront retourner un résultat compatible avec la fonction
d’échange précédente, pour pouvoir répondre aux deux prochaines questions.
*/
Book &getMaxPageAmount(Book books[], int size);
Book &getMinPageAmount(Book books[], int size);

/*
2.4.3 Blague
Écrivez un programme principal qui lit un petit nombre de livres (p. ex. 4) dans un
tableau et qui réalise l’échange du nombre de pages du livre le plus long et du livre le
plus court. Cet échange doit être réalisé en une seule instruction combinant des appels
aux fonctions précédentes. Le programme affiche ensuite le tableau pour vérification.
*/
void joke(Book books[], int size);

/*
2.4.4 Blague (bis)
Même chose que précédemment, mais cette fois-ci l’échange sera fait à partir de variables
intermédiaires dans lesquelles les résultats des fonctions de recherche (le plus long, le
plus court) seront stockés. Les fonctions utilisées sont inchangées.
*/
void jokeAgain(Book books[], int size);

#endif