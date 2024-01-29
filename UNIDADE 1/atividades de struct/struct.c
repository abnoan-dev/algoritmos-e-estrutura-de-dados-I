#include <stdio.h>
#include<stdlib.h>

// Definindo a estrutura aluno
struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

int main(void)
{
    struct aluno estudante;
    printf("Digite o nome do aluno:\n");
    scanf("%[^\n]", estudante.nome);

    printf("Digite a idade:\n");
    scanf("%d", &estudante.idade);

    printf("Digite a matricula:\n");
    scanf("%d", &estudante.matricula);
    
    printf("Digite o email:\n");
    scanf("%[^\n]", estudante.email);

    return 0;
}


// -------------------------------------------------------------


#include <stdio.h>
#include<stdlib.h>

// Definindo a estrutura aluno
struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

int main(void){
     
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL){
        exit(1);
    }

    struct aluno estudante;
    printf("Digite o nome do aluno:\n");
    scanf("%[^\n]", estudante->nome);

    printf("Digite a idade:\n");
    scanf("%d", &estudante->idade);

    printf("Digite a matricula:\n");
    scanf("%d", &estudante->matricula);

    printf("Digite o email:\n");
    scanf("%[^\n]", estudante->email);

    return 0;
}


// -------------------------------------------------------------



#include <stdio.h>
#include<stdlib.h>


// typedef serve para renomear um struct
// Definindo a estrutura aluno
struct aluno
{
    char nome[20];
    int idade;
    int matricula;
    char email[50];
};

void preenche(struct aluno * estudante){
     struct aluno estudante;

    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]", estudante->nome);

    printf("Digite a idade:\n");
    scanf("%d", &estudante->idade);

    printf("Digite a matricula:\n");
    scanf("%d", &estudante->matricula);

    printf("Digite o email:\n");
    scanf(" %[^\n]", estudante->email);

}

void imprime(struct aluno * estudante){
    printf ("Nome: %s\n Idade: %d \n Matricula %d \n Email:\n %s ", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
}

int main(void){
     
    struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
    if (estudante == NULL){
        exit(1);
    }

   preenche(estudante);
   imprime(estudante);
   free(estudante);

    return 0;
}