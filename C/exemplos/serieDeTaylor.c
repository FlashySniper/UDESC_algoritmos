#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	double x;
	int n, i, j;
	printf("Digite o valor de x: ");
	scanf("%lf", &x);
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	double e_x = 0; // inicializa somatório com zero
	for( i = 0 ; i <= n ; i++ ){ // gera os termos da série
		double termo = 1;
		for( j = 1 ; j <= i ; j++ ){ // potenciação e fatorial
			termo = termo * x/j;
		}
		e_x = e_x + termo; //acumula termo no somatorio
	}
	printf("e elevado a %.3f = %.15lf\n", x, e_x);
	return 0;
}
