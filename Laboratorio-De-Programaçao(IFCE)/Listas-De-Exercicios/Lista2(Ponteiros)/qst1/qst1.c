/*Escreva um programa que adicione dois n ́umeros usando ponteiros. Alem do valor da soma, imprima
tambem o endereco de mem ́oria onde o valor resultante dessa soma esta armazenado.*/
#include <stdio.h>
#define TAM 100

int main(void) {
  
  int x,p=TAM, *n1=NULL,*n2=NULL;

  n1 = &p; //ponteiro *n1 e *n2 apontam para o endereço de memoria do p
  n2 = &p;

  x = *n1 + *n2; 

  printf("memoria:[%p]\nvalor:[%d]",&x,x);


  return 0;
}