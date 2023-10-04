int cont = 0;
float x, soma = 0;
do{
	printf("Digite o %i numero: ", cont+1);
	scanf("%f", &x);
	if(x != 0){
		soma = soma+x;
		cont++;
	}
}while(x != 0);
