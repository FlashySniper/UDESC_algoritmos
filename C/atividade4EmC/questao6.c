#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	double x, sen=0;
	int n, i, j, sinal=1;
	scanf("%lf %d", &x, &n);
	for(i=0; i<=n;i++){
		double termo=1;
		for(j=1; j<=i*2+1; j++){
			termo = termo * x/j;
		}
		sen = sen + termo * sinal;
		sinal = -sinal;
	}
	printf("Seno de %lf = %lf\n", x, sen);
	return 0;
}
