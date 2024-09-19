1 Échauffement (sans ordinateur, répondre dans README.txt)
Qu’affiche le code du listing 1 sur sa sortie standard ?
   il affiche "x vaut 5"

Expliquez ce qui se produit à la ligne 6, 7 et 8.
   dans la ligne 6 est fait une reference de la variable x
   ensuite le r reçois le value de la variable y
   enfin le r reçois le rvalue 5
   comment la reference a changer de valeur, la variable original va changer aussi



2.2.1 Question Voyez-vous un intrus dans cette liste ?
Dans tous les cas, soyez joueurs et testez chacune des versions dans votre programme
principal pour lire 4 nombres de pages. 
a) Expliquez le message du compilateur. 
   """
   book.h:10:9: note: candidate: ‘int Book::read(int)’
      10 |     int read(int n);
         |         ^~~~
   book.h:11:9: note: candidate: ‘int Book::read(int&)’
      11 |     int read(int &n);
         |         ^~~~
   main.cpp:14:39: error: call of overloaded ‘read(int&)’ is ambiguous
      14 |     cout << "reference: " << book.read(r);
         |                              ~~~~~~~~~^~~
   In file included from main.cpp:2:
   book.h:10:9: note: candidate: ‘int Book::read(int)’
      10 |     int read(int n);
         |         ^~~~
   book.h:11:9: note: candidate: ‘int Book::read(int&)’
      11 |     int read(int &n);
         |         ^~~~
   make: *** [<builtin>: main.o] Error 1
   """

   le problème est que la function que reçois par valeur e la function 
   que reçois le nombre par reference sont la même chose pour le compilateur, 
   donc il y a d'ambiguité dans le moment de linkedition



3 Références et retour de fonction
Si readBook() est la fonction de lecture sans arguments répondant à la question 2.2.2
et swapPageCount() est celle qui répond à la question 2.4.1, vérifiez que l’instruction
ci-dessous provoque une erreur de compilation. Expliquez.
   """
   main.cpp: In function ‘void testSwap()’:
   main.cpp:60:38: error: cannot bind non-const lvalue reference of type ‘Book&’ to an rvalue of type ‘Book’
      60 |     swapPageAmounts(createBookByInput(), createBookByInput());
         |                     ~~~~~~~~~~~~~~~~~^~
   In file included from main.cpp:2:
   book.h:83:28: note:   initializing argument 1 of ‘void swapPageAmounts(Book&, Book&)’
      83 | void swapPageAmounts(Book &book1, Book &book2);
         |                      ~~~~~~^~~~~
   make: *** [Makefile:10: main.o] Error 1
   """

   En effet, le retour de la fonction de création de livre est un rvalue (right value)
   et nous essayons de la placer dans le paramètre de la fonction de swap, qui a besoin
   d'une adresse réelle en mémoire (lvalue) pour modifier les variables.


   
4 Pour aller plus loin (OPTIONNEL)
Vous trouverez sur la plateforme deux exercices supplémentaires.