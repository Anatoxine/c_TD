#include <stdio.h>  
#define MESSAGE "Super!\n"


int main() {  
    /*
    printf(MESSAGE);
    printf("résultat: %i\n", dbl(4));
    printf("%i\n",2); 

    printf(tableau());*/
    printf("%lu", sizeof("Youpi!\n"));
    
}  

int dbl(int a){
    return a*2;
}

void tableau(){
    int tab[3];
    tab[0]=1;
    tab[1]=2;
    /*
    printf("%i\n",tab[0]);
    printf("%i\n",tab[1]);
    printf("%i\n",tab[3]);
    printf("tab[0]= %i, tab[1]= %i", tab[0],tab[1]); */

    printf(" %i,%i,%i,%i", tab[0], tab[1], tab[2], tab[3]);
}



