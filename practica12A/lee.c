#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argn,char **argv)
{
    char *fileName = argv[1];
    int fd = open(fileName,O_RDONLY);
    char buffer;
    if(fd<0)
    {
        printf("No se puede abrir \n");
        exit(1);
    }

    while(read(fd,&buffer,1))
    {
        printf("%c",buffer);
    }
    close(fd);
    exit(0);
}