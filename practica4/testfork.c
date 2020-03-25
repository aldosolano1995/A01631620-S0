#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkcall() 
{ 
    if (fork() == 0) 
        printf("Child\n"); 
  
    else
        printf("Parent\n"); 
}

int main() 
{ 
    printf("Que rollo pollo\n"); 
    forkcall(); 
      
    return 0; 
} 