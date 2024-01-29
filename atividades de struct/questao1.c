#include <stdio.h>
#include <stdlib.h>

struct Funcionario {
    char nome[20];
    int idade;
    float salario;
    char cargo[20];
    char sexo[10];
};

void preencherDados(struct Funcionario *f) {
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", f->nome);

    printf("Digite a idade do funcionário: ");
    scanf("%d", &f->idade);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &f->salario);

    printf("Digite o cargo do funcionário: ");
    scanf(" %[^\n]", f->cargo);

    printf("Digite o sexo do funcionário: ");
    scanf(" %[^\n]", f->sexo);
}

void imprimirDados(struct Funcionario *f) {
    printf("Nome: %s\n", f->nome);
    printf("Idade: %d\n", f->idade);
    printf("Salário: %.2f\n", f->salario);
    printf("Cargo: %s\n", f->cargo);
    printf("Sexo: %s\n", f->sexo);
}

void alterarSalarioFuncionario(struct Funcionario *f) {
    printf("Digite o novo salário: ");
    scanf("%f", &f->salario);
}

void encontrarMaiorEMenorSalario(struct Funcionario *funcionarios, int n) {
    float maiorSalario = funcionarios[0].salario;
    float menorSalario = funcionarios[0].salario;
    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 0; i < n; i++) {
        if (funcionarios[i].salario > maiorSalario) {
            maiorSalario = funcionarios[i].salario;
            posicaoMaior = i;
        } else if (funcionarios[i].salario < menorSalario) {
            menorSalario = funcionarios[i].salario;
            posicaoMenor = i;
        }
    }

    printf("------------------------------------\n");
    printf("Cargo do funcionário com maior salário: %s\nSalário: %.2f\n", funcionarios[posicaoMaior].cargo, funcionarios[posicaoMaior].salario);
    printf("------------------------------------\n");
    printf("Cargo do funcionário com menor salário: %s\nSalário: %.2f\n", funcionarios[posicaoMenor].cargo, funcionarios[posicaoMenor].salario);
}

int main(void) {
    int quantidadeFuncionarios, opcao;
    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &quantidadeFuncionarios); 

    struct Funcionario funcionarios[quantidadeFuncionarios];

    for (int i = 0; i < quantidadeFuncionarios; i++) {
        printf("------------------------------------\n");
        printf("Digite os dados do funcionário %d\n", i + 1);
        preencherDados(&funcionarios[i]);
        printf("------------------------------------\n");
    }

    for (int i = 0; i < quantidadeFuncionarios; i++) {
        printf("Dados do funcionário %d\n", i + 1);
        printf("------------------------------------\n");
        imprimirDados(&funcionarios[i]);
        printf("------------------------------------\n");
    }

    printf("Você deseja alterar o valor de algum salário (1- Sim, 2- Não): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int funcionarioEscolhido;
        printf("Digite o número do funcionário que deseja alterar o salário: ");
        scanf("%d", &funcionarioEscolhido); 

        alterarSalarioFuncionario(&funcionarios[funcionarioEscolhido - 1]);

        printf("------------------------------------\n");
        printf("Dados do funcionário %d\n", funcionarioEscolhido);
        printf("------------------------------------\n");   
        imprimirDados(&funcionarios[funcionarioEscolhido - 1]);
    }

    encontrarMaiorEMenorSalario(funcionarios, quantidadeFuncionarios);

    return 0;
}
