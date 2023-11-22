#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIN 5
#define COL 6 

int main(int argc, char * argv[]){
	int i, j;
	int m[LIN][COL];
	int mTransposta[COL][LIN];
	for (i = 0; i < LIN; i++){
		for (j = 0; j < COL; j++){
			printf("Coordenada [%d, %d]: ", i, j);
			scanf("%d", &m[i][j]);
			mTransposta[i][j] = m[j][i];
		}
	}
	for (i = 0; i < COL; i++){
		for (j = 0; j < LIN; j++){
			printf("%d\t", m[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
