#include <stdio.h>

int main(){
    maximum()
}

int maximum(int *t, int n){
    int t[n];
    int max=t[0];

    for(int i=1;i<n;i++){
        if(max<t[i]){
            max=t[i];
        }
    }

    printf("valeur maximale: %i\n", max);
}