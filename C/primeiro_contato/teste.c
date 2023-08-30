#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x, y; 
	printf("Digite um nº: ");
	scanf("%f", &x);
	printf("Digite outro nº: ");
	scanf("%f", &y);
	float media = (x+y) / 2;
	printf("Média: %.2f\n", media);
	
	return 0;
}
