#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
    Pilha* p = pilha_cria();
    pilha_push(p, 10);
    pilha_push(p, 20);
    pilha_push(p, 30);
    pilha_imprime(p);
    printf("Desempilhando: %f\n", pilha_pop(p));
    printf("Desempilhando: %f\n", pilha_pop(p));
    printf("Desempilhando: %f\n", pilha_pop(p));
    pilha_libera(p);
    return 0;
}
