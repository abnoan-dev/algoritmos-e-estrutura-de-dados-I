#include "aluno.c"
#include <stdlib.h>

int main(void) {
    Aluno * aluno;
    aluno = recebe_dados();

    imprime_dados(aluno);
    libera_memoria(aluno);


    return 0;
}