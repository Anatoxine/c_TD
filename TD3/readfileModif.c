#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char** argv) {

    char*b;
    b = malloc(sizeof(char) * 11);
    
    int fd = open(argv[1], O_RDONLY);
    int size = 11;
   do{
       size = read (fd, b, size);
       b[size]= '\0';
       printf("%s", b);
   }while(size == 11);

   close(fd);
}
