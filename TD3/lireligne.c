#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

/**
 * Lit une ligne du fichier correspondant au descripteur passé en argument jusqu'à lire un retour à la ligne ('\n') ou
 * avoir lu size caractères.
 *
 * @param fd descripteur de fichier ouvert en lecture
 * @param s buffer dans lequel les octets lus sont écrits
 * @param size nombre maximum d'octets à lire
 * @return le nombre d'octets effectivement lus
 */
int lireligne(int fd, char *s, int size) {
    int n=0;
    int sz;
    char c;
    bool test=true;
   do{
       sz = read (fd, &c, 1);
       if(sz==0){
           test=false;
       }
       else{
       write(s[n], &c,1);
       n+=1;
       }
   }while(n<size && c!='\n' && test==true);
    return n;
} //end lireligne

int main() {
    char*b;
    b = malloc(sizeof(char) * 11);
    int fd = open("./message.txt", O_RDONLY);
    lireligne(fd,b,100);
}
