#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	int i, cont = 0;
	for(i=1; i<=x; i++){
		if(x%i == 0){
			cont++;
			printf("%d : %d;\n", cont, i);
		}
	}
	printf("%d tem %d divisores\n", x, cont);
	if(cont == 2){
		printf("%d eh primo\n", x);
	}else{
		printf("%d nao eh primo\n", x);
	}
	return 0;
}
