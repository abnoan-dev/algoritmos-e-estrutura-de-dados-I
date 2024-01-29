#include<stdio.h>


typedef enum {
    janerio = 1,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    otubro,
    novembro,
    dezembro
}Mes;


typedef struct data {
    int dia;
    Mes mes;
    int ano;
}Data;


void ler_data(Data *data){

    printf("Informe o DIA: \n");
    scanf("%d", &(data->dia));

    printf("informe o MES de acordo com sua numeração de 1 a 12: \n");
    scanf("%d",(int*) &(data->mes));

    printf("informe o ANO: ");
    scanf("%d", &(data->ano));

}

void imprimir_data(Data *data) {
    printf("DATA: %02d/%02d/%04d\n", data->dia, data->mes, data->ano);
}

int main() {
    Data d;

    ler_data(&d);
    imprimir_data(&d);

    return 0;
}