#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
  int a, b, i;
  int temp; //variavel temporaria
  int n=2, m=2; //contadores
  int mmc=1, mdc=1;
  int sair; //numero para continuar o loop
  do{
  	do{
  	printf("Digite o primeiro numero: ");
  	scanf("%d", &a);
  	}while(a<=0);
  	do{
  	printf("Digite o segundo numero: "); 
  	scanf("%d", &b);
  	}while(b<=0); 
  	while(a != 1 && b != 1){
    	if ((a % n == 0) && (b % n == 0)){
    		a = a / n;
    		b = b / n;
			mmc = mmc * n;  
    	}else{
    		if (a % n == 0){
    			a = a / n;
				mmc = mmc * n; 	
			}else{
				if (b % n == 0){
    			b = b / n;
				mmc = mmc * n; 
				}else{
					n = n+1;
				}
			}	
  		}	
	}
  	printf("MMC: %d\n", mmc);
  	printf("MDC: %d\n", mdc);
  	printf("Digite 1 para continuar ou 0 para finalizar o programa: ");
  	scanf("%d", &sair);
}while(sair != 0);
return 0;
}
