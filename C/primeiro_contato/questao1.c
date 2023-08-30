#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float far;
	printf("Digite a temperatura em Farenheit: ");
	scanf("%f", &far);
	float celsius = (5.0/9) * (far-32);
	printf("%f °F equivalem a %f°C", far, celsius);
	return 0;
}
