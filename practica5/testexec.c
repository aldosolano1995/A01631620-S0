#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkcall() 
{ 
    if (fork() == 0) 
        execlp("ls","ls","-a","/",(char *)NULL);
  
    else
        printf("Parent\n"); 
}

int main() 
{ 
    forkcall(); 
      
    return 0; 
} 