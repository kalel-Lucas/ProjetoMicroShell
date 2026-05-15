#include <stdio.h>
#include <string.h>
#include "terminal.h"

void mostrar_prompt () {
    printf("\n\nMicro Shell > ");
    char buffer[100];
    ler_comando(buffer); 
    printf("\n\n\nVoce acabou de digitar: %s",buffer); 
}

void ler_comando(char buffer[]) {
    fgets(buffer,100,stdin);

}


void iniciar_shell() {
    while(1) {
        mostrar_prompt(); 
    }

}
