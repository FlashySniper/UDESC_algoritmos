#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x, y; 
	printf("Digite um n�: ");
	scanf("%f", &x);
	printf("Digite outro n�: ");
	scanf("%f", &y);
	float media = (x+y) / 2;
	printf("M�dia: %.2f\n", media);
	
	return 0;
}
