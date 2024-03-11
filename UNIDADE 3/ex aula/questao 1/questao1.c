#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct lista {
    int info;
    Lista *pro_elemento;
} Lista;


