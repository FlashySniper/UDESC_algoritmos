#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float altura, imc;
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	char sexo;
	printf("Digite 'f' para feminino ou 'm' para masculino: ");
	scanf(" %c", &sexo);
	if (sexo == 'm'){
		imc = (72.7 * altura) - 58;
		printf("Seu peso ideal eh %.2f", imc);
	}else{
		if(sexo == 'f'){
			imc = (62.1*altura) - 44.7;
			printf("Seu peso ideal eh %.2f", imc);
		}else{
			printf("Alguma informação está incorreta, tente novamente.");
		}
	}
	return 0;
}
