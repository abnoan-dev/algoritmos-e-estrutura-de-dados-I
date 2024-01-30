#include<stdio.h>

int main(void) {
    int c;
    int nlinhas = 0;
    
    FILE *fp;

    // Abre o arquivo para leitura
    fp = fopen("entrada.txt", "rt");
    if (fp == NULL) {
        printf("não foi possivel abrir arquivo\n");
        return 1;
    }

    //lê caractere por caractere
    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') 
            nlinhas++;
        

    }

    // Fecha o arquivo
    fclose(fp);
    // Imprime o resultado na tela
    printf(" Numero de linhas = %d\n", nlinhas);
    return 0;
}