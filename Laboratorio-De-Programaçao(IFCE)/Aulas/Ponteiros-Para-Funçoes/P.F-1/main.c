#include <stdio.h>
#include<stdlib.h>

void multiplicar(int a, int b, int *r);
void dividir(int a, int b, int *r);
void subtrair(int a, int b, int *r);

int main(int argc, char*argv[]) {
  
  void (*oper)(int,int, int *) = NULL;

  if(argc!=4){
    printf("ERRO!!\n formato: <valor1><valor2><operaçao>");
    exit(1);
  }

  int n1 = atoi(argv[1]);
  int n2 = atoi(argv[2]);
  int op = atoi(argv[3]);
  int r;

  switch(op){
    case 1:
      oper = multiplicar;
      break;
    case 2:
      oper = dividir;
      break;
    case 3:
      oper = subtrair;
      break;

    default:
      puts("codigo invalido");
      exit(2);
  }


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


void subtrair(int x, int y, int *z){
  *z = x - y;
}