#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int n;
	printf("Digite o numero de vezes que o calculo sera realizado: ");
	scanf("%d", &n);
	float pi=0;
	int i;
	for(i=1; i<=n; i++){
		if(i%2 != 0){
			pi = pi + 4.0/(i*2-1); 
		}else{
			pi = pi - 4.0/(i*2-1);
		}
	}
	printf("O valor aproximado de Pi eh %f\n", pi);
	return 0;
}
