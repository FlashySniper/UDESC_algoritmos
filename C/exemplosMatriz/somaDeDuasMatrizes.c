#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIN 2
#define COL 2 

int main(int argc, char * argv[]){
	int i, j;
	int matrizA[LIN][COL];
	int matrizB[LIN][COL];
	int matrizSoma[LIN][COL];
	printf("Matriz A: \n");
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("Coordenada [%d, %d]: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	printf("Matriz B: \n");
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("Coordenada [%d, %d]: ", i, j);
			scanf("%d", &matrizB[i][j]);
			matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
			
		}
	}

	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("%d\t", matrizSoma[i][j]);
		}
		printf("\n");
	}

	return 0;
}
