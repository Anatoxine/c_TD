#include <stdio.h>  

int main(){
   
   /* float tab[3], *a, *b;
    a=&tab[0];
    b=&tab[1];
    
    printf("%lu\n ,%lu\n",(long unsigned) a, (long unsigned) b);
    */
    int t[2];
    printf("premiere adresse: %lu, \n seconde adresse: %lu\n",
    (long unsigned) t,
    (long unsigned) (t+1));
}

