#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	float x, y;
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	printf("Digite o valor de y: ");
	scanf("%f", &y);
	if(x==0 && y==0){
		printf("Origem\n");
	}else{
		if(y==0){
			printf("Eixo X\n");
		}else{
			if(x==0){
				printf("Eixo Y\n");
			}else{
				if(x>0){
					if(y>0){
						printf("Q1\n");
					}else{
						printf("Q4\n");
					}
				}else{
					if(y>0){
						printf("Q2\n");
					}else{
						printf("Q3\n");
					}
				}
			}
		}
	}
}
