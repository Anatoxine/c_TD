#include <stdio.h>

int main(){
    maximum(4, 2);
}

int maximum(int *t, int n){
    int tab[n];
    t=&tab;
    
    int max=tab[0];

    for(int i=1;i<n;i++){
        if(max<tab[i]){
            max=tab[i];
        }
    }

    printf("valeur maximale: %i\n", max);
}