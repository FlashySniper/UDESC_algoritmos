#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float raio, altura;
	printf("----Calculando a área de um cilindro----\n");
	printf("Digite o raio: ");
	scanf("%f", &raio);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	float volume = M_PI * altura * pow(raio, 2); 
	printf("O volume deste cilindro eh de %.2f", volume);
	return 0;
}
