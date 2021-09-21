// Faça um programa em C que leia uma string do usuario e informe a quantidade de caracteres da
//string fornecida. N ̃ao use a funcao strlen().

#include <stdio.h>
#define TAM 20

int main(void) {
  int i=0,cont=0;
  char str[TAM];

  printf("digite uma string : ");
  fgets(str,TAM,stdin);

  while(str[i] !='\0'){
    cont++;
    i++;
  }

printf("temos um total de %d caracteres digitados",cont-1);
  return 0;
}