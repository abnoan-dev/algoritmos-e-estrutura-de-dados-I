#include <stdio.h>

// Enum para gênero
typedef enum {
    MASCULINO,
    FEMININO
} Genero;

// Struct para Pessoa
typedef struct {
    char nomeCompleto[50];
    int idade;
    Genero genero;
} Individuo;

// Função para ler os dados de um indivíduo
void lerDados(Individuo *individuo) {
    printf("Digite o nome completo: ");
    scanf(" %[^\n]", individuo->nomeCompleto);

    printf("Digite a idade: ");
    scanf("%d", &(individuo->idade));

    printf("Digite o gênero (0 para masculino, 1 para feminino): ");
    scanf("%d", (int*)&(individuo->genero));
}

// Função para imprimir os dados de um indivíduo
void imprimirDados(Individuo *individuo) {
    printf("Nome Completo: %s \n", individuo->nomeCompleto);
    printf("Idade: %d \n", individuo->idade);
    printf("Gênero: %s \n", individuo->genero == MASCULINO ? "Masculino" : "Feminino");
}

int main() {
    Individuo pessoa;

    lerDados(&pessoa);
    imprimirDados(&pessoa);

    return 0;
}
