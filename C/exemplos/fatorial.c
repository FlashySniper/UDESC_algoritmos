#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	int fat=1;
	int cont=1;
	while(cont <= n){
		fat = fat * cont;
		cont = cont+1; 
	}
	printf("%d! eh %d\n", n, fat);
	return 0;
}
