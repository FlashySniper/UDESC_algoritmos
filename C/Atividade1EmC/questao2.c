#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Aqui vai o código
	char nome[50];
	printf("Digite o nome do piloto: ");
	scanf("%s", &nome);
	float distancia, tempo;
	printf("Digite a distancia percorrida (km): ");
	scanf("&f", &distancia);
	printf("Digite o tempo (h): ");
	scanf("%f", &tempo);
	float velocidade = distancia / tempo;
	printf("Velocidade media de %s foi de %.2f km/h." , nome, velocidade);
	return 0;
}
