#include<stdio.h>
#include<stdlib.h>

int main(void) {

    //cria o arquivo: entrada_escrita.txt no modo texto "w" write //
    FILEC * arquivo = fopen("entrada_escrita.txt", "w");

    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    else {
        printf("Arquivo aberto com sucesso\n");
    }
     
     fputc('a', arquivo); // escreve um caractere no arquivo //

     // escreve no arquivo //
    // fputs("Teste de escrita de dados em arquivo\n", arquivo);

                                                                          
    fprintf(arquivo, "Teste de escrita de dados em arquivo\n"); // escreve uma string no arquivo //

    if(fclose(arquivo)) {
        printf("Erro no fechamento do arquivo\n");
    }
    else {
        printf("Arquivo fechado com sucesso\n");
    } // fecha o arquivo criado //


    return 0;
}