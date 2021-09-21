//Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.
#include <stdio.h>
#define TAM 15

int main() {

  char str[TAM], *v;
  int cont=0,i=0;

  printf("digite uma string:");
  fgets(str,TAM,stdin);

  v = str;

  printf("%s",str);

  while(*v != '\0'){
    if(*v=='a'){
      cont++;
    }
    v++; // pulando para o prox elemento do vetor
    printf("[%p]\n",v); // ilustrando o pulo da memoria 
  }

  printf("temos [%d] 'a'",cont);
  return 0;
}