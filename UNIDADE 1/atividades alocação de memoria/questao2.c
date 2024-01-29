#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE_ESTUDANTES 10

void calcularResultado(char *respostasCertas, char **respostasAlunos, int quantidadeQuestoes)
{
  float nota = 0;
  float acertos = 0;
  float aprovados = 0;

  printf("----------NOTAS DOS ALUNOS----------\n");
  for (int i = 0; i < QUANTIDADE_ESTUDANTES; i++)
  {
    nota = 0;
    acertos = 0;
    for (int j = 0; j < quantidadeQuestoes; j++)
    {
      if (respostasAlunos[i][j] == respostasCertas[j])
      {
        acertos++;
      }
    }

    nota = acertos / quantidadeQuestoes * 10;
    printf("ALUNO %d: %.2f\n", i + 1, nota);

    if (nota >= 6.0)
    {
      aprovados++;
    }
  }

  float porcentagemAprovados = (aprovados / QUANTIDADE_ESTUDANTES) * 100;

  printf("PORCENTAGEM DE APROVADOS: %.2f %%", porcentagemAprovados);
}

int main(void)
{

  int quantidadeQuestoes;

  printf("DIGITE A QUANTIDADE DE QUESTÕES: ");
  scanf("%d", &quantidadeQuestoes);

  char *respostasCertas = (char *)malloc(quantidadeQuestoes * sizeof(char));
  char **respostasAlunos = (char **)malloc(QUANTIDADE_ESTUDANTES * sizeof(char *));

  for (int i = 0; i < QUANTIDADE_ESTUDANTES; i++)
  {
    respostasAlunos[i] = (char *)malloc(quantidadeQuestoes * sizeof(char));
    if (respostasAlunos[i] == NULL)
    {
      printf("ERRO DE ALOCAÇÃO DE MEMÓRIA\n");
      exit(1);
    }
  }

  if (respostasCertas == NULL)
  {
    printf("ERRO DE ALOCAÇÃO DE MEMÓRIA\n");
    exit(1);
  }

  printf("--------GABARITO DA PROVA----------\n");

  for (int i = 0; i < quantidadeQuestoes; i++)
  {

    printf("DIGITE A RESPOSTA DA QUESTÃO %d: ", i + 1);
    scanf(" %c", &respostasCertas[i]);
  }
  printf("------------------------------------\n");

  printf("\n");

  for (int i = 0; i < QUANTIDADE_ESTUDANTES; i++)
  {

    printf("---------------ALUNO %d--------------\n", i + 1);

    for (int j = 0; j < quantidadeQuestoes; j++)
    {
      printf("DIGITE A RESPOSTA DO ALUNO PARA A QUESTÃO %d: ", i + 1);
      scanf(" %c", &respostasAlunos[i][j]);
    }
  }


  calcularResultado(respostasCertas, respostasAlunos, quantidadeQuestoes);

  free(respostasAlunos);

  for (int i = 0; i < QUANTIDADE_ESTUDANTES; i++)
  {
    free(respostasAlunos[i]);
  }
  free(respostasCertas);

  return 0;
}