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
	//SelectionSort
	for(i=0; i < N-1; i++){
		int i_menor = i, j;
		for(j = i+1; j < N; j++){
			if(v[j] < v[i_menor]){
				i_menor = j;
			}
		}
		int aux = v[i];
		v[i] = v[i_menor];
		v[i_menor] = aux;
	}
	//Mostra vetor ordenado
	printf("Vetor ordenado: ");
	for (i=0; i<N; i++){
		printf("%d ", v[i]);
	} 
	printf("\n");
	return 0;
}
