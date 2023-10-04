#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main(int argc, char * argv[]){
//	float x, y;
//	printf("Digite dois numeros: ");
//	scanf("%f %d", &x, &y);
//	int z = 1;
//	while (y != 0){
//		if(y > 0){
//			z = z * x;
//			y--;
//			printf("%f", y);
//		}else{
//			//y = -y;
//			z = z * (1/x);
//			y++;
//			printf("%f", x);
//		}				
//	}
//	printf("Resultado: %.2f\n", z);
//}

int main(int argc, char * argv[]){
	float x;
	int y;
	scanf("%f %d", &x, &y);
	if (x < 0){
		x = x/1;
		y = -y;
	}
	float z=1;
	while(y > 0){
		z = z * x;
		y--;
	}
	printf("Resultado: %.2f\n", z);
}
