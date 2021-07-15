#include <stdio.h>
#include<stdlib.h>

typedef void (*func)();

void multiplicar(int a, int b, int *r);
void dividir(int a, int b, int *r);

int main(int argc, char*argv[]) {

  if(argc!=4){
    printf("ERRO!!\n formato: <valor1><valor2><operaçao>");
    exit(1);
  }

  
  func v[2] = {multiplicar, dividir};
  void (*oper)(int,int, int *) = NULL;

  int n1 = atoi(argv[1]);
  int n2 = atoi(argv[2]);
  int op = atoi(argv[3]);
  int r;

  oper = (op % 2)?v[1]:v[0]; // diferente de 0 pega v[1] e igual a 0 pega o v[0]

  /*if(op%2==0){
  oper = v[0];
  }
  else{
    oper = v[1];
  }
*/

  (*oper)(n1,n2,&r);

  printf("r = %d\n",r);

  return 0;
}

void multiplicar(int x, int y, int *z){
  *z = x * y;
}

void dividir(int x, int y, int *z){
  *z = x / y;
}
