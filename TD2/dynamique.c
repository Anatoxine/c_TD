#include <stdio.h>

int* copie(int *tab, int n) {
    int *tab2;
    tab2 = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        tab2[i] = tab[i];
    }
    return tab2;
}
// message d'alerte: la fonction copie retourne une adresse d'une variable locale (adresse qui disparait apres l'utilisation de la fonction car sauvegardée dans le stockage automatique (pile) )