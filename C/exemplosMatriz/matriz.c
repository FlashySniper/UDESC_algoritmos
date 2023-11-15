#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIN 3
#define COL 2 

int main(int argc, char * argv[]){
	int i, j;
	float m[LIN][COL];
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++){
			printf("M[%dx%d]: ", i, j);
			scanf("%d", &m[i][j]);
		} 
	}
	printf("Dados da matriz [%dx%d]: \n", i, j);
	for(i=0; i<LIN; i++){
		for(j=0; j<COL; j++){
			printf("%d\t ", m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
