#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 3
#define MIN 3 

int main(int argc, char * argv[]){
	int i, j;
	float v[MIN][MAX];
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			scanf("%d", &v[i][j]);
		} 
	}
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
