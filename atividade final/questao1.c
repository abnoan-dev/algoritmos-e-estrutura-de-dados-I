#include <stdio.h>


typedef struct {
  float valor;
  char localDoEvento[50];
  char atracao[100];
} Evento;


void limpaBuffer() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}


void preencher(Evento *evento) {
  printf("Digite o valor do ingresso: ");
  scanf("%f", &evento->valor);
  limpaBuffer(); 
  printf("Digite o local do evento: ");
  fgets(evento->localDoEvento, 50, stdin); 
  evento->localDoEvento[strcspn(evento->localDoEvento, "\n")] = 0; 
  printf("Digite a atração do evento: ");
  fgets(evento->atracao, 100, stdin); 
  evento->atracao[strcspn(evento->atracao, "\n")] = 0; 
}


void imprimir(Evento *evento) {
  printf("Valor do ingresso: %.2f\n", evento->valor);
  printf("Local do evento: %s\n", evento->localDoEvento);
  printf("Atração do evento: %s\n", evento->atracao);
}


void alterarPreco(Evento *evento, float valor) {
  evento->valor = valor;
}


void imprimirMenorMaiorPreco(int n, Evento *eventos) {
  float menorPreco = eventos[0].valor;
  float maiorPreco = eventos[0].valor;
  int eventoMenorPreco = 0;
  int eventoMaiorPreco = 0;

  for (int i = 1; i < n; i++) {
    if (eventos[i].valor < menorPreco) {
      menorPreco = eventos[i].valor;
      eventoMenorPreco = i;
    }
    if (eventos[i].valor > maiorPreco) {
      maiorPreco = eventos[i].valor;
      eventoMaiorPreco = i;
    }
  }

  printf("Evento de ingresso mais barato:\n");
  imprimir(eventos + eventoMenorPreco);
  printf("\nEvento de ingresso mais caro:\n");
  imprimir(eventos + eventoMaiorPreco);
}


int main() {
  Evento evento1, evento2;

  printf("Preencha os dados do primeiro evento:\n");
  preencher(&evento1);
  printf("\n");

  printf("Preencha os dados do segundo evento:\n");
  preencher(&evento2);
  printf("\n");

  printf("Valores do primeiro evento:\n");
  printf("Evento: %s\n", evento1.atracao);
  imprimir(&evento1);
  printf("\nValores do segundo evento:\n");
  printf("Evento: %s\n", evento2.atracao);
  imprimir(&evento2);
  printf("\n");

  Evento eventos[2] = {evento1, evento2};
  imprimirMenorMaiorPreco(2, eventos);

  return 0;
}