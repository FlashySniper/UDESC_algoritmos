#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf("-----Calculadora Simples-----\n");
	float numA, numB, resultado;
	printf("Digite um número: ");
	scanf("%f", &numA);
	printf("Digite outro número: ");
	scanf("%f", &numB);
	printf("Escolha uma operação segundo seu número:\n");
	printf(" 1 - Adição\n 2- Subtração\n 3- Multiplicação\n 4- Divisão\n");
	int operacao;
	scanf("%d", &operacao);
	if(operacao == 1){
		resultado = numA + numB; 
		printf("%.2f + %.2f = %.2f", numA, numB, resultado);
	}
	if(operacao == 2){
		resultado = numA - numB;
		printf("%.2f - %.2f = %.2f", numA, numB, resultado);
	}
	if(operacao == 3){
		resultado = numA * numB; 
		printf("%.2f x %.2f = %.2f", numA, numB, resultado);
	}
	if(operacao == 4){
		resultado = numA / numB; 
		printf("%.2f / %.2f = %.2f", numA, numB, resultado);
	}
	return 0;
}
