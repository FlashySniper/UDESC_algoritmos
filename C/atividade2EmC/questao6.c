#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf("-----Calculadora Simples-----\n");
	float numA, numB, resultado;
	printf("Digite um n�mero: ");
	scanf("%f", &numA);
	printf("Digite outro n�mero: ");
	scanf("%f", &numB);
	printf("Escolha uma opera��o segundo seu n�mero:\n");
	printf(" 1 - Adi��o\n 2- Subtra��o\n 3- Multiplica��o\n 4- Divis�o\n");
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
