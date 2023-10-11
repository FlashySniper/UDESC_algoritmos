#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	int i=1, cont=0;
	while(x>=i){
		cont++;
		x = x-i;
		i = i+2;
	}
	printf("A parte inteira eh %d", cont);
	return 0;
}
