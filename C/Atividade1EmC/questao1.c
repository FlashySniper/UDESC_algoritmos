#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Aqui vai o código
	float f, c;
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &f);
	c = 5.0/9 * (f - 32);
	printf("Resultado: %.3f graus celsius.", c);
	int x = c;
	printf(" Temperatura convertida para int: %d\n", x);
	return 0;
}
