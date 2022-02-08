#include <stdio.h>

int* copie(int *tab, int n) {
    
    int *tab2= malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        tab2[i] = tab[i];
    }

    return tab2;
}
// message d'alerte: la fonction copie retourne une adresse d'une variable locale (adresse qui disparait apres l'utilisation de la fonction car sauvegardée dans le stockage automatique (pile) )

int* unsurdeux(int *tab, int n){
    int *tab2=malloc(sizeof(int) * n/2);
    int j=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            tab2[j]=tab[i];
            j++;
        }
    }

    return tab2;
}



int main(){

    int tab[3]={1,2,3};
    printf("%lu", (long unsigned) unsurdeux(tab,3));
    
}

