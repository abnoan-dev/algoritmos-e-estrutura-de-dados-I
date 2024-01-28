
#include <stdio.h>
#include <math.h>

void calcula_figura_hexagonal(float lado_hexagono, float *espaco_ocupado, float *contorno) {
*espaco_ocupado = (3 * sqrt(3) * pow(lado_hexagono, 2)) / 2;
*contorno = 6 * lado_hexagono;
}

int main() {
float medida_lado, area_total, comprimento_total;

printf("DIGITE O COMPRIMENTO DO LADO DO HEXAGONO: ");
scanf("%f", &medida_lado);

calcula_figura_hexagonal(medida_lado, &area_total, &comprimento_total);

printf("AREA: %.2f\n", area_total);
printf("PERIMETRO: %.2f\n", comprimento_total);

return 0;
}