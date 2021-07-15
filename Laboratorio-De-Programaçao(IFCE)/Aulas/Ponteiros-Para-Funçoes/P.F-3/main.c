#include <stdio.h>

int incrementar(int);

int main() {

  void (*pf)();
  int r;

  pf = (void (*) ())incrementar;

  r = ((int (*) (int))pf)(22);

  printf("r: %d",r);
 
  return 0;
}

int incrementar(int a){
  return a+1;
}