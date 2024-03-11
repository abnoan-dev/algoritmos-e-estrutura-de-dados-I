#include "lista.h"
#include <stdlib.h>

typedef struct lista {
    int info;
    Lista *pro_elemento;
} Lista;


Lista *cria_lista(void) {
    return NULL;
}

Lista *insere_elementos(Lista *lista, int valor) {

    // aloca um novo nó da lista encadeada
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if(novo == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }

    // adiciona o valor no campo de informações
    novo->info = valor;

    // conecta o novo nó a lista
    novo->pro_elemento = lista;
    return novo;
}