#include <stdio.h>
#include <stdlib.h>

#define MAXA 50
#define MAXB 100

void armazena_valores(int i, int max, int x[i]);
void remove_valores(int i, int max, int x[max]);

int main(int argc, char * argv[]){
	int a, b;
	int vA[MAXA];
	int vB[MAXB];
	int opcao = 0;
	do{
		int opcaoB = 0;
		printf("[1] - Insercao de valores \n[2] - Remocao de todos os valores \n[3] - Exibir valores \n[4] - Uniao de conjuntos \n[5] - Intersecção de valores \n[6] - Diferenca de conjuntos \n[7] - Sair\n");
		printf("Selecione a opcao que deseja utilizar: ");
		scanf("%d", &opcao);
		switch (opcao){
			case 1:
				do{
					printf("[1] - Preencher conjunto A\n[2] - Preencher conjunto B \n");
					scanf("%d", &opcaoB);
				}while (opcaoB != 1 && opcaoB != 2);
				switch (opcaoB){
					case 1: 
						armazena_valores(a, MAXA, vA);
					break;
					
					case 2:
						armazena_valores(b, MAXA, vB);
					break;	
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				printf("Essa opção não existe!");
		}
	}while(opcao != 7);

	return 0;
}

void armazena_valores(int i, int max, int x[i]){
	int n, j;
	int opcaoLocal =1;
	do{
		printf("Digite o %d o numero", i);
		scanf("%d", &n);
		for(j=0; j<=i; j++){
			if(n == x[i]){
				printf("Este numero ja foi armazenado!\n");		
			}
		}
		x[i] = n;
		i = i+1;
		printf("Deseja continuar?\n 1- Continuar \n 0- Parar");
		scanf("%d", &opcaoLocal);
	}while(opcaoLocal == 0);
}

