#include <stdio.h>
#include <stdlib.h>

#define MAXA 50
#define MAXB 100

void armazenaValores(int i, int max, int x[max]);
void removeValores(int i, int max, int x[max]);

int main(int argc, char * argv[]){
	int a=0, b=0;
	int vA[MAX];
	int vB[MAX];
	do{
		int opcao = 0;
		printf("[1] - Inserção de valores \n[2] - Remoção de todos os valores \n[3] - Exibir valores \n[4] - União de conjuntos \n[5] - Intersecção de valores \n[6] - Diferença de conjuntos \n[7] - Sair");
		printf("Selecione a opção que deseja utilizar: ");
		scanf("%d", &opcao)
		switch (opcao){
			case 1:
				do{
					printf("[1] - Preencher conjunto A\n [2] - Preencher conjunto B");
				}while (opcao2 != 1 || opcao != 2)
				switch (opcao2){
					case 1: 
						armazenaValores(a, MAX, vA);
					break;
					
					case 2:
						armazenaValores(b, MAX, vB);
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
				printf("Essa opção não existe!")
		}
	}while(opcao != 7);

	return 0;
}

void armazenaValores(int i, int j, int x[max]){
	int n, a=0;
	for(i=a; i<= max; i++){
		printf("Digite o %do numero do conjunto");
		scanf("%d", &n);
		for(i=a; i<= max; i++){
			while(n == x[i]){
				printf("Digite um número válido!\n");
				scanf("%d", &n);
			}
		}
		x[i] = n;
	}
	i = a;
}

