#include <stdio.h>
#include <string.h>
#define TAM 20

int main(void) {
  
  char str1[TAM], str2[TAM];
  int  i,cont,letras;

  printf("digite uma string: ");
  fgets(str1,TAM,stdin);

  printf("digite uma string: ");
  fgets(str2,TAM,stdin);

  letras = strlen(str1); // a quantidade de strings no vetor

  cont=0;
  for(i=0;i<letras;i++){ //verificando se as str sao iguais
    if(str1[i]==str2[i]){
      cont++; // caso iguais conta +1
    }
  }
    if(cont==letras)
      printf("as strings sao iguais!!!");
    else
      printf("as strings sao diferentes!!!");  
  
  
  return 0;
}