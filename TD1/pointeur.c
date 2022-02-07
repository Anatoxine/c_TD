#include <stdio.h>  

int main() {  
    int a, *b;
    a = 12;
    b = &a;
    *b = a + 1;
    printf("a = %i, b = %lu\n", a, (long unsigned) b);
}  


/* a est un entier, b est un pointeur sur un entier
a prend la valeur 12
b est l'adresse memoire de a
b qui est l'adresse de a change la valeur de la case pour a+1 donc 13
le programme affiche la valeur a (13) et l'adresse b (elle change a chaque fois) 

le message d'alerte nous indique que b n'est pas en entier */
