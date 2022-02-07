#include <stdio.h> 
int main() {  
    char chaine[80];
    printf("Entrez une chaîne: ");
    fgets(chaine, 80, stdin);
    fputs(chaine, stdout);
    int i=0;
    int nb=-1;

    while(chaine[i]!='\0'){
        i++;
        nb++;

    }
    printf("%i\n",nb);
}  
