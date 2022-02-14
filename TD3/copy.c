#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Copie le contenu du fichier message.txt dans un fichier copie.txt
 */
int main() {

    char*b;
    b = malloc(sizeof(char) * 11);
    int fd = open("./message.txt", O_RDONLY);
    int size;
    int fdc=creat("copie.txt",0777);
    fdc=open("copie.txt",O_WRONLY);
   do{
       size = read (fd, b, 10);
       b[size]= '\0';
       write(fdc, b, size);
   }while(size == 10);

   close(fd);
   close(fdc);
}
