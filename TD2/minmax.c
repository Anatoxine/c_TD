#include <stdio.h>

int main(){
    
    int x, y;
    f(12, 4, &x, &y);
    printf("x = %d, y = %d\n", x, y);

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

void f(int a, int b, int *s, int *p) {
    *s = a + b;
    *p = a * b;
}
