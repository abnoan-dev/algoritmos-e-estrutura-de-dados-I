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