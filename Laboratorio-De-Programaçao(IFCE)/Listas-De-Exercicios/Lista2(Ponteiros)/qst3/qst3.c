/*Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.*/

#include <stdio.h>
#define linha "\n-------------------------\n"

int main(void) {
  
  int x,n, cont=0;
	int maior, menor; 
	int *pMaior = NULL, *pMenor = NULL;

	pMaior = &maior;
	pMenor = &menor;

  do{
    printf("digite um numero:");
    scanf("%d",&n);     // -> n = 10  - END n: 2000
    
    if(cont==0){
      *pMaior = n;
			*pMenor = n;
		}
    else if(n>*pMaior){
      *pMaior = n; // *maior = n;
    }
    else if(n<*pMenor){
      *pMenor = n;;
    }
		printf(linha);
		printf( "Digite [0] para continuar:\nDigite [-1] para parar:");
		printf(linha);
		scanf("%d",&x);
  
    cont++;
  
	}while(x!=-1);
  
	printf(linha);
  printf("maior => [%d]\nmenor => [%d]",*pMaior,*pMenor);
  printf(linha);
  return 0;
}