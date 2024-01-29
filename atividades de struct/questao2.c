#include <stdio.h>
#include <stdlib.h>

struct DadosPessoais {
    char nome[20];
    int idade;
    int cpf;
};

void preencherDadosPessoais(struct DadosPessoais *p) {
    printf("Digite o nome: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite a idade: ");
    scanf("%d", &p->idade);

    printf("Digite o CPF: ");
    scanf("%d", &p->cpf);
}

void imprimirDadosPessoais(struct DadosPessoais *p) {
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    printf("CPF: %d\n", p->cpf);
}

void alterarIdadePessoa(struct DadosPessoais *p) {
    printf("Digite a nova idade: ");
    scanf("%d", &p->idade);
}

void encontrarMaisVelhoEMaisNovo(struct DadosPessoais *pessoas, int quantidade) {
    int idadeMaisVelha = pessoas[0].idade;
    int idadeMaisNova = pessoas[0].idade;
    int indiceMaisVelho = 0;
    int indiceMaisNovo = 0;

    for (int i = 0; i < quantidade; i++) {
        if (pessoas[i].idade > idadeMaisVelha) {
            idadeMaisVelha = pessoas[i].idade;
            indiceMaisVelho = i;
        }
        else if (pessoas[i].idade < idadeMaisNova) {
            idadeMaisNova = pessoas[i].idade;
            indiceMaisNovo = i;
        }
    }

    printf("A pessoa mais velha é: %s\n"
    "com a idade: %d\n", pessoas[indiceMaisVelho].nome, pessoas[indiceMaisVelho].idade);

    printf("A pessoa mais nova é: %s\n"
    "com a idade: %d\n", pessoas[indiceMaisNovo].nome, pessoas[indiceMaisNovo].idade);
}

int main(void) {
    int numPessoas, posicao, opcao;
    printf("Digite o número de pessoas: ");
    scanf("%d", &numPessoas);

    struct DadosPessoais *pessoas = (struct DadosPessoais*) malloc (numPessoas * sizeof(struct DadosPessoais));

    for(int i = 0; i < numPessoas; i++) {
        printf("------------------------------------\n");
        printf("Digite os dados da pessoa %d\n", i+1);
        preencherDadosPessoais(&pessoas[i]);
    }

    for(int i = 0; i < numPessoas; i++) {
        printf("------------------------------------\n");
        printf("Dados da pessoa %d\n", i+1);
        imprimirDadosPessoais(&pessoas[i]);
    }  

    printf("Deseja alterar a idade de alguma pessoa? (1 - sim, 2 - não): ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Digite a posição da pessoa que deseja alterar a idade: ");
        scanf("%d", &posicao);
        alterarIdadePessoa(&pessoas[posicao]);
    }

    encontrarMaisVelhoEMaisNovo(pessoas, numPessoas);

    free(pessoas);
    return 0;
}
