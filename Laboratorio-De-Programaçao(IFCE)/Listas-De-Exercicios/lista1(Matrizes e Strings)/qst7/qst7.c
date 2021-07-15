#include <stdio.h>
#include<string.h>
#define TAM 10

int main(void) {
  
  int i,tamanho;
  char str[TAM];

  printf("digite uma string:");
  fgets(str,TAM,stdin);

  tamanho = strlen(str);

  for(i=tamanho;i>=0;i--)
    printf("%c",str[i]);

  return 0;
}