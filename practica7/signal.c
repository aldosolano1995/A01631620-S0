#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void processSignal(int s){
    printf("Recibí señal %d\n",s);
}

void processSignal2(int s){
    printf("No me puedes matar perro e.e, no al menos con la señal %d\n",s);
}

int main(){
    signal(10,processSignal);
    signal(15,processSignal2);
    while(1){
        sleep(3);
        printf("Trabajando\n");
    }
    return 1;
}