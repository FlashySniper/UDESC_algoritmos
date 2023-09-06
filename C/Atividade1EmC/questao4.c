#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float vi, a, t;
	printf("Digite a velocidade inicial: ");
	scanf("%f", &vi);
	printf("Digite a aceleracao: ");
	scanf("%f", &a);
	printf("Digite o tempo: ");
	scanf("%f", &t);
	float velocidade = (a*t) + vi;
	printf("A velocidade do objeto eh de &f", velocidade);
	return 0;
}
