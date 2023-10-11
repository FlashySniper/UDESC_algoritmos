#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int x;
	int cont=1;
	int maior;
	
	do{
		printf("Digite o %do numero (0 para parar): ", cont);
		scanf("%d", &x);
		if(cont == 1){
			maior = x;
		}
		if(x != 0){
			cont++;
			if(x > maior){
				maior = x;
			}
		}	
	}while(x != 0);
	
	if(cont == 1 ){
		printf("Nao ha numero.\n");
	}else{
		printf("O maior valor eh %d\n", maior);
	}
		
	return 0;
}
