//Escreva um programa que copie uma string para outra usando ponteiros.
#include <stdio.h>
#define TAM 12

int main() {

  char *copiar = NULL, *colar = NULL;
  char str1[] = "ola usuario";
  char str2 [TAM];

  copiar = str1;
  colar = str2;

  while(*copiar!='\0'){
    *colar = *copiar;
    colar++;
    copiar++;
  }

  printf("%s",str2);



  return 0;
}