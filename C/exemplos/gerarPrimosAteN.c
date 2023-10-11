#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int n, x;
	printf("Digite um numero: ");
	scanf("%i", &n);
	for(x = 1 ; x <= n ; x++){
 		int i, cont = 0;
 		for(i = 1 ; i <= x ; i++){
 			if(x % i == 0)
 				cont++;
 		}
 		if(cont == 2)
 			printf("%i \n", x);
	}
	return 0;
}
