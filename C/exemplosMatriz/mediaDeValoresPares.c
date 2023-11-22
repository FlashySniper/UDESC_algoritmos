#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIN 4
#define COL 5 

int main(int argc, char * argv[]){
	int i, j;
	int m[LIN][COL];
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("Coordenada [%d, %d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	int soma = 0, cont = 0;
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			if (m[i][j] % 2 == 0){
				soma = soma + m[i][j];
				cont++;
			} 
		}
	}
	float media = (float)soma/cont;
	printf("%f", media);
	return 0;
}
