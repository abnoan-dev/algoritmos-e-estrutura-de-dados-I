#include <stdio.h>
#include <stdlib.h>

// Enum para CategoriaProduto
typedef enum {
    ALIMENTO,
    BEBIDA,
    ELETRONICO
} CategoriaProduto;

// Union para DetalhesProduto
typedef union {
    char alimentoNome[50];
    char bebidaNome[50];
    char eletronicoNome[50];
} DetalhesProduto;

// Struct para Produto
typedef struct {
    char nomeProduto[50];
    float preco;
    DetalhesProduto detalhes;
    CategoriaProduto categoria;
} Produto;

// Função para ler os dados de um produto
void lerDados(Produto *p) {
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", p->nomeProduto);

    printf("Digite o preco: ");
    scanf("%f", &(p->preco));

    printf("Digite a categoria (0 para alimento, 1 para bebida, 2 para eletronico): ");
    scanf("%d", (int*)&(p->categoria));

    switch (p->categoria) {
        case ALIMENTO:
            printf("Digite o nome do alimento: ");
            scanf(" %[^\n]", p->detalhes.alimentoNome);
            break;
        case BEBIDA:
            printf("Digite o nome da bebida: ");
            scanf(" %[^\n]", p->detalhes.bebidaNome);
            break;
        case ELETRONICO:
            printf("Digite o nome do eletronico: ");
            scanf(" %[^\n]", p->detalhes.eletronicoNome);
            break;
    }
}

// Função para imprimir os dados de um produto
void imprimirDados(Produto *p) {
    printf("Nome: %s\n", p->nomeProduto);
    printf("Preco: %.2f\n", p->preco);

    switch (p->categoria) {
        case ALIMENTO:
            printf("Categoria: Alimento - %s\n", p->detalhes.alimentoNome);
            break;
        case BEBIDA:
            printf("Categoria: Bebida - %s\n", p->detalhes.bebidaNome);
            break;
        case ELETRONICO:
            printf("Categoria: Eletronico - %s\n", p->detalhes.eletronicoNome);
            break;
    }
}

int main() {
    Produto *produto = (Produto*) malloc(sizeof(Produto));

    lerDados(produto);
    imprimirDados(produto);

    free(produto);
    return 0;
}
