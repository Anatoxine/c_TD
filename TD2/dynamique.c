#include <stdio.h>

int* copie(int *tab, int n) {
    int tab2[n];
    for (int i = 0; i < n; i++) {
        tab2[i] = tab[i];
    }

    int *p;
    p = malloc(sizeof(int) * n);
    
    p=&tab2;

    return *p;
}
// message d'alerte: la fonction copie retourne une adresse d'une variable locale (adresse qui disparait apres l'utilisation de la fonction car sauvegardée dans le stockage automatique (pile) )