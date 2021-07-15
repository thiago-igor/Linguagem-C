#include <stdio.h>

int main(void) {
  
  int a=10, b=20,c;
  int *p1=NULL, *p2=NULL;

  p1 = &a;
  p2 = &b;
  // trocando os numeros da variaveis com os ponteiros:
  c = *p1;
  a = *p2;
  b = c;

  printf("%d,%d",a,b);

  return 0;
}