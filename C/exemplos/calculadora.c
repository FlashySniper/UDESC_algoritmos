#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int opcao;
	
	do{
		float calculo = 0;
		float x, y;
		//system("cls");
		printf("1-Soma\n");
		printf("2-Subtracao\n");
		printf("3-Multiplicacao\n");
		printf("4-Divisao\n");
		printf("5-Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		if(opcao == 5){
			break;
		}
		printf("Digite o primeiro numero da conta: ");
		scanf("%f", &x);
		printf("Digite o segundo numero da conta: ");
		scanf("%f", &y);
		
		switch(opcao){
			case 1:
				calculo = x + y;
				printf("%.2f + %.2f = %.2f\n", x, y, calculo);
				break; 
			case 2:
				calculo = x - y;
				printf("%.2f - %.2f = %.2f\n", x, y, calculo);
				break; 
			case 3:
				calculo = x * y;
				printf("%.2f * %.2f = %f\n", x, y, calculo);
				break; 
			case 4:
				if(x < y && y == 0){
					printf("Divisao invalida!\n");
				}else{
					calculo = x / y;
					printf("%.2f / %.2f = %.2f\n", x, y, calculo);
				}
				break; 
			default:
				printf("Esta opcao eh invalida!\n");
				break;
		}
	}while(opcao != 5);
	return 0;
}
