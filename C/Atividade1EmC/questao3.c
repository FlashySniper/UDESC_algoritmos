#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	float horas, valor_horas;
	printf("Digite o nome do funcion�rio: ");
	scanf("%s", &nome);
	prinft("Digite o n�mero de horas trabalhadas: ");
	scanf("&f", &horas);
	printf("Digite o valor recebido por hora: ");
	scanf("%f", &valor_horas);
	float salario = horas * valor_horas;
	printf("O salario do funcionario %s � de R$%f", nome, salario);
	return 0;
}
