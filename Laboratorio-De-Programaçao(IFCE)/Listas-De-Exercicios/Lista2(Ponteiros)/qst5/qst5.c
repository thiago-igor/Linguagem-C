#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>
#define TAM 31

int main(void) {
  int n,i;
  char str[TAM],*p;

  printf("digite seu nome:");
  fgets(str, TAM, stdin);
  p = str;
  printf("%s",p);

  n = strlen(p);

  printf("tamanho da string => %d",n-1);


  
  return 0;
}