#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {

    char*b;
    b = malloc(sizeof(char) * 11);
    int fd = open("./message.txt", O_RDONLY);
    int size;
   do{
       size = read (fd, b, 10);
       b[size]= '\0';
       write(1, b, size);
   }while(size == 10);

   close(fd);
}











