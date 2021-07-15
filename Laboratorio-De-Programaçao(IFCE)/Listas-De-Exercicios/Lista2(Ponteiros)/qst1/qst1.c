// soma de 2 ponteiros:
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