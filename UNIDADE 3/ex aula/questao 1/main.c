#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No* next;
} No;

typedef struct Lista {
    No* head;
} Lista;

int maiores(Lista* l, int n) {
    int count = 0;
    No* current = l->head;

    while (current != NULL) {
        if (current->info > n) {
            count++;
        }
        current = current->next;
    }

    return count;
}

int main() {
    
    Lista lista;
    lista.head = NULL;

    No* no1 = (No*)malloc(sizeof(No));
    no1->info = 5;
    no1->next = NULL;
    lista.head = node1;

    No* no2 = (No*)malloc(sizeof(No));
    no2->info = 10;
    no2->next = NULL;
    no1->next = no2;

    No* no3 = (No*)malloc(sizeof(No));
    no3->info = 15;
    no3->next = NULL;
    no2->next = no3;

    
    int count = maiores(&lista, 10);
    printf("Number of nodes with info > 10: %d\n", count);

    
    No* current = lista.head;
    while (current != NULL) {
        No* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}