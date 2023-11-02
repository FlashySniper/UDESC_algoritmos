#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
  int sair; //numero para continuar o loop
  printf("-----MMC e MDC de numeros inteiros-----\n");
  do{
	int a, b;
	int n=2; //contador
	int mmc=1;
	int mdc=1;
    do{
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    }while(a<=0);
    do{
    printf("Digite o segundo numero: "); 
    scanf("%d", &b);
    }while(b<=0); 
    while(a != 1 || b != 1){
    if (a % n == 0 && b % n == 0){
        a = a / n;
        b = b / n;
        mmc = mmc * n;
        mdc = mdc * n; 
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
