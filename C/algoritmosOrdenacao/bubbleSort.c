#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char * argv[]) {
	int v[N], i;
	srand (time(0));
	for (i=0; i < N; i++){
		v[i] = rand() % 100 + 1; // Gera numeros de 1 ate 100
	}
	printf("Vetor original: ");
	for (i=0; i < N; i++){
		printf("%d ", v[i]);
	}
	printf("\n\n");
	//BubbleSort
	int trocou;
	do{
		trocou=0;
		for(i=0; i < N-1; i++){
			if(v[i] > v[i+1]){
				int aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				trocou = 1;
			}
		}	
	}while(trocou);
	//Mostra vetor ordenado
	printf("Vetor ordenado: ");
	for (i=0; i<N; i++){
		printf("%d ", v[i]);
	} 
	printf("\n");
	return 0;
}
