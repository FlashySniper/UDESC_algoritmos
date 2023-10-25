#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int n, k=2, i;
	float soma=1;
	scanf("%d", &n);
	printf("1 + ");
	for(i=1; i<=n; i++){
		printf("1/%d + ", k);
		k = k+1;
		soma = (float)soma + (float)1/k;
	}
	printf("\nA soma dos termos eh de %f", soma);
	return 0;
}
