#include<stdio.h>

int soma(int a, int b) {
	return a + b;
}

int subtracao(int a, int b) {
	return a - b;
}

int divisao(int a, int b) {
	return a % b;
	
}

int multiplicacao(int a, int b) {
	return a * b;
}

int calcula(int x, int y, int(*operacao)(int, int)) {
	return (*operacao)(x, y);
}

int main(void) {
	
	int resultado = calcula(5, 3, subtracao);
	printf("resultado: %d", resultado);
	return 0;
}