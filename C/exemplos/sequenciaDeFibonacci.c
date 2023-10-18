#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	long long int a = 1, b = 1, atual;
	int n, i;
	do{
	printf("Digite a quantidade de termos: ");
	scanf("%i", &n);
	}while(n<=0);
	
	if(n==1){
		printf("1°: 1\n");
	}else{
		printf("1°: 1\n2°: 1\n"); // dois primeiros termos printados na tela
	
		for(i=3; i<=n; i++){
			atual = a+b; //gera o termo atual
			printf("%i°: %lli\n", i, atual); 
			a = b; //atualiza a e b para a
			b = atual; //variavel temporaria
		}	
	}
	return 0;
}
