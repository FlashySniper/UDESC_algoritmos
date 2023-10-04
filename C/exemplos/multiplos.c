#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	int n, x, i;
	scanf("%d %d", &n, &x);
	for(i=1; i<=1;i++){
		if(i % x == 0)
			printf("%d (multiplos de %d)\n", i, x);
		else
			printf("%d\n", i);
	}
}
