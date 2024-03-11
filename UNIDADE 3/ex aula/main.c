#include "lista.h"

int main() {

    // cria uma lista encadeada //
    Lista *lista_encadeada = cria_lista();

    // insere elementos na lista encadeada //
    lista_encadeada = insere_elementos(lista_encadeada, 10);
    lista_encadeada = insere_elementos(lista_encadeada, 20);
    lista_encadeada = insere_elementos(lista_encadeada, 30);

    void imprime_lista(Lista *lista_encadeada) {
        Lista *p;
        for(p = lista_encadeada; p != NULL; p = p->pro_elemento) {
            printf("%d\n", p->info);
        }
    }

    void busca_elemento(Lista *lista_encadeada, int valor) {
        Lista *p;
        for(p = lista_encadeada; p != NULL; p = p->pro_elemento) {
            if(p->info == valor) {
                printf("Elemento encontrado\n");
                return p;
            }
        }
        printf("Elemento não encontrado\n");
    }

    return 0;
}