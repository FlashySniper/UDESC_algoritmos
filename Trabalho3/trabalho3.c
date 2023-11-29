#include <stdio.h>
#include <stdlib.h>

#define MAXA 50
#define MAXB 100

int armazena_valores(int i, int max, int x[i]);
void remove_valores(int i, int max, int x[i]);

int main(int argc, char * argv[]){
	int a=0, b=0;
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
						a = armazena_valores(a, MAXA, vA);
					break;
					
					case 2:
						b = armazena_valores(b, MAXA, vB);
					break;	
				}
				break;
			case 2:
				do{
					printf("[1] - Preencher conjunto A\n[2] - Preencher conjunto B \n");
					scanf("%d", &opcaoB);
				}while (opcaoB != 1 && opcaoB != 2);
				switch (opcaoB){
					case 1: 
						a = remove_valores(a, MAXA, vA);
					break;
					
					case 2:
						b = remove_valores(b, MAXA, vB);
					break;	
				}
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
				printf("Essa opcao nao existe!");
		}
	}while(opcao != 7);

	return 0;
}

int armazena_valores(int i, int max, int x[i]){
	int n, j;
	int opcaoLocal = 1;
	int boolean = 0;
	do{
		printf("Digite o %d o numero: ", i);
		scanf("%d", &n);
		for(j=0; j<=i; j++){
			if(n == x[j]){
				printf("Este numero ja foi armazenado!\n");	
				boolean = 1;	
			}
		}
		if(boolean == 0){
			x[i] = n;
			i = i+1;	
		}else{
			boolean = 0;
		}
		printf("Deseja continuar?\n 1- Continuar \n 0- Parar\n");
		scanf("%d", &opcaoLocal);
	}while(opcaoLocal != 0);
	return i;
}

void remove_valores(int i, int max, int x[i]){
	int j;
	for(j=i; j>=0; j--){
				
	}
}

