1 Échauffement (sans ordinateur, répondre dans README.txt)
Qu’affiche le code du listing 1 sur sa sortie standard ?
Expliquez ce qui se produit à la ligne 6, 7 et 8.


il affiche "x vaut 5"
dans la ligne 6 est fait une reference de la variable x
ensuite le r reçois le value de la variable y
enfin le r reçois le rvalue 5
comment la reference a changer de valeur, la variable original va changer aussi



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

b) Résolvez le problème en utilisant un espace de noms.