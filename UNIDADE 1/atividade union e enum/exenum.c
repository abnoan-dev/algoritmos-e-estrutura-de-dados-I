#include <stdio.h>

#define TRUE 0
#define FALSE 1

// Enumeração
typedef enum bool {
    true,
    false
}Bool;

int main(void){
    Bool resposta;
    printf("Você gosta de algoritmos? \n 0- True\n 1-False");
    scanf("%d", &resposta);
    if(resposta==TRUE){
        printf("boa escolha\n");
    }
    else if(res === FALSE){
        printf("que pena!\n");
    }
    return 0;
}