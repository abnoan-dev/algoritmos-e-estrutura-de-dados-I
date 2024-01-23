#include<stdio.h>
#include<stdlib.h>


int main(void) {
int *vetor = malloc(3*sizeof(int));     
if(vetor==NULL){
    printf("Erro na locação de memoria");
    exit(1);
}else{
    printf("execução bem sucedida!");
}


    free(vetor);
    return 0;
}

// ---------------------------------------------------------------------------------


#include <stdio.h>  // printf, scanf
#include <stdlib.h> // funções, malloc, realloc, calloc, free, exit

int main(void)
{

    int tamanho = 5;
    int contador;
    int *vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        exit(1); // aborta a execução do programa
    }
    else
    {
        printf("Alocacao realizada com sucesso");
    }
    // ler os dados do vetor:
    printf("informe os valores do vetor:");
    for (contador = 0; contador < tamanho;
         contador++)
    {
        scanf("%d", &vetor[contador]);
    }
    free(vetor);
    return 0;
}


// ---------------------------------------------------------------------------------


#include <stdio.h>  // printf, scanf
#include <stdlib.h> // funções, malloc, realloc, calloc, free, exit

int main(void){
   char * nome = (char*) malloc(50*sizeof (char));
   if(nome==NULL){
       exit(1);
   }
   printf("Digite seu nome: \n");
   scanf("%[^\n]", nome);

    free(nome);
    return 0;
}


// ---------------------------------------------------------------------------------
// realocação da memoria

#include <stdio.h>  // printf, scanf
#include <stdlib.h> // funções, malloc, realloc, calloc, free, exit

int main(void)
{

    int tamanho = 5; novo_tamanho;
    int contador;
    int *vetor = (int*)malloc(tamanho * sizeof(int));
    printf("entre com novo tamanho do vetor\n");
    scanf("%d", &novo_tamanho);
    vetor = (int *) realloc(vetor, novo_tamanho * sizeof(int));

    if(vetor == NULL){
        printf("memoria insuficiente!");
        exit(1); //aborta a execução do programa
    }
    free(vetor);
    return 0;
}