#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

int main(int argc, char * argv[]){
	int v[MAX]; 
	int i; // Vari�vel para percorrer os �ndices
	for(i = 0; i < MAX; i++){
 		v[i] = rand() % 100 + 1;
	}	
	
	/* Entrada Manual
	for(i = 0; i < MAX; i++){
 		printf("Digite o %do. valor: ", i + 1 );
	 	scanf("%d", &v[i]); // Entrada
	}
	*/
	
	for(i = 0; i < MAX; i++){
 		printf("v[%d] : %d\n", i, v[i]); // Sa�da
	}
	return 0; 
}
