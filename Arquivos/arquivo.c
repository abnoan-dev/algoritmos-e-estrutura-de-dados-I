#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE* fp;
    // cria um arquivo chamado entrada.txt no modo texto "t" //

    fp = fopen("entrada.txt", "w");  // w = write : escrever, r = read : ler, a = append : anexar //
    char c[20];
    if(fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    else{
        printf("Arquivo aberto com sucesso\n");
    }
    // escreve no arquivo //

   // c = fgetc(fp);   // lê um caractere do arquivo //

   // fgets(c,20, fp); // lê uma linha do arquivo //

    fscanf(fp, "%s", c); // lê uma string do arquivo //
    printf("%c\n", c); // imprime o caractere lido //
    if(ifclose(fp)){
        printf("Erro no fechamento do arquivo\n");
    }
    else{
        printf("Arquivo fechado com sucesso\n");
    } // fecha o arquivo criado //

    return 0;
}