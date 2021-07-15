/*Escreva um programa que leia um vetor do usuario e imprima seus valores e seus enderecos. Teste
o vetor com tipos de dados diferentes, analise os enderecos. usando ponteiros!. O que vocˆe observou?*/

#include <stdio.h>

int main(){

  int i,n,*p;

    printf("digite o tamanho do vetor:");
    scanf("%d",&n);

  int v[n];
  p =v;

  for(i=0;n>i;i++){
    printf("numero[%d]:",i);
    scanf("%d",&v[i]);
  }

  printf("\n----------------\n");
  for(i=0;n>i;i++){
    printf("numero[%d]: %d /endereço[%p]\n",i,p[i],&p[i]);

  }
  return 0;
}
