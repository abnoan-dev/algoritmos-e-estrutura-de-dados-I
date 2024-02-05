// TAD: tipo abstrato de dados

// TAD: um novo tipo (struct) + conjunto de operações

#include <aluno.h>
#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[20];
    int matricula;
    float ira;
    
};

Aluno * recebe_dados(void) {

    Aluno * estudante = (Aluno *) malloc(sizeof(Aluno));
    if(estudante == NULL) {
        printf("sem memória\n");
        exit(1);
    }

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", estudante->nome);

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &estudante->matricula);

    printf("Digite o IRA do aluno: ");
    scanf("%f", &estudante->ira);

    return estudante;
}



void imprime_dados(Aluno * estudante) {
    printf("Nome: %s\n", estudante->nome);
    printf("Matrícula: %d\n", estudante->matricula);
    printf("IRA: %.2f\n", estudante->ira);
}

void libera_memoria(Aluno * estudante) {
    free(estudante);
}