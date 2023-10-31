#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b;
  int temp; //variavel temporaria
  int n=2;
  do{
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  }while(a>0);
  do{
  printf("Digite o segundo numero: "); 
  scanf("%d", &b);
  }while(b>0); 
  while(a != 1 && b != 1){
    a = a / n;
    if (a % n <> 0){
      n = n+1;
    }
  }
  return 0;
}