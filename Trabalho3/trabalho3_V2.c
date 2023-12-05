#include <stdio.h>
#include <stdlib.h>

#define MAXA 50
#define MAXB 100

int armazena_valores(int i, int max, int x[i]);
int remove_valores(int i, int max, int x[i]);

int main(int argc, char * argv[]){
  int a=0, b=0, k=0, m=0 , iMaior=0;
  int vA[MAXA];
  int vB[MAXA];
  //int vUniao[MAXB];
  //int	vInterseccao[MAXB];
  //int vDiferenca [MAXA];
  int opcao = 0;
  do{
    int opcaoB = 0;
    printf("\n[1] - Insercao de valores \n[2] - Remocao de todos os valores \n[3] - Exibir valores \n[4] - Uniao de conjuntos \n[5] - Intersecção de valores \n[6] - Diferenca de conjuntos \n[7] - Sair\n");
    printf("Selecione a opcao que deseja utilizar: ");
    scanf("%d", &opcao);
    switch (opcao){
      case 1:
        do{
          printf("[1] - Preencher conjunto A\n[2] - Preencher conjunto B \n");
          scanf("%d", &opcaoB);
        }while (opcaoB != 1 && opcaoB != 2);
        switch (opcaoB){
          case 1: 
            a = armazena_valores(a, MAXA, vA);
          break;

          case 2:
            b = armazena_valores(b, MAXA, vB);
          break;	
        }
        break;
      case 2:
        do{
          printf("[1] - Excluir conjunto A\n[2] - Excluir conjunto B \n");
          scanf("%d", &opcaoB);
        }while (opcaoB != 1 && opcaoB != 2);
        switch (opcaoB){
          case 1: 
            a = remove_valores(a, MAXA, vA);
          break;

          case 2:
            b = remove_valores(b, MAXA, vB);
          break;	
        }
        break;
      case 3:
        printf("Vetor A: \n");
        if(a == 0){
          printf("Conjunto vazio\n");
        }else{
          for(k=0; k<a; k++){
            printf("%d ", vA[k]);
          }
        }
        printf("\nVetor B: \n");
        if(b == 0){
          printf("Conjunto vazio\n");
        }else{
          for(k=0; k<b; k++){
            printf("%d ", vB[k]);
          }
        }
        printf("\n\n");
        break;
      case 4:
        if(a == 0 && b == 0){
          printf("Conjunto vazio\n");
          break;
        }
        if(a >= b){
          iMaior = a;
        }else{
          iMaior = b;
        }
        printf("\nVetor C: \n");
        for(k=0; k<iMaior; k++){
          printf("%d %d ", vA[k], vB[k]);
        }
        break;
      case 5:
        if(a >= b){
          iMaior = a;
        }else{
          iMaior = b;
        }
        for(k=0; k<iMaior; k++){
          for(m=0; m<iMaior; m++){
            if(vA[k] == vB[m]){
              printf("%d ", vA[k]);
            }
          }
        }
        break;
      case 6:
        do{
          printf("[1] - A - B\n[2] - B - A \n");
          scanf("%d", &opcaoB);
        }while (opcaoB != 1 && opcaoB != 2);
        switch(opcaoB){
          case 1:
            if(a == 0 && b == 0){
              printf("Conjunto vazio\n");
              break;
            }
            if(a >= b){
              iMaior = a;
            }else{
              iMaior = b;
            }
            printf("Vetor A - Vetor B: \n");
            for(k=0; k<iMaior; k++){
              printf("%d ", (vA[k] - vB[k]));
            }
            break;

          case 2:
            if(a == 0 && b == 0){
              printf("Conjunto vazio\n");
              break;
            }
            if(a >= b){
              iMaior = a;
            }else{
              iMaior = b;
            }
            printf("Vetor B - Vetor A: \n");
            for(k=0; k<iMaior; k++){
              printf("%d ", (vB[k] - vA[k]));
            }
            break;
        }
        break;
      case 7:
        printf("Volte sempre!");
        break;
      default:
        printf("Essa opcao nao existe!\n");
    }
  }while(opcao != 7);

  return 0;
}

int armazena_valores(int i, int max, int x[i]){
  int n, j;
  int opcaoLocal = 1;
  int boolean = 0;
  do{
    if(i > 50){
      printf("Você ficou sem espaço de armazenamento, remova os valores caso queria utilizar esta função novamente");
    }
    printf("Digite o %d o numero: ", i);
    scanf("%d", &n);
    for(j=0; j<=i; j++){
      if(n == x[j]){
        printf("Este numero ja foi armazenado!\n");	
        boolean = 1;	
      }
    }
    if(boolean == 0){
      x[i] = n;
      i = i+1;	
    }else{
      boolean = 0;
    }
    printf("Deseja continuar?\n 1- Continuar \n 0- Parar\n");
    scanf("%d", &opcaoLocal);
  }while(opcaoLocal != 0);
  return i;
}

int remove_valores(int i, int max, int x[i]){
  int j;
  for(j=i; j>0; j--){
    x[j] = 0;			
    i = i-1;
  }
  return i;
}