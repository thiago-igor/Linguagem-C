/*Escreva um programa que receba dois valores por linha de execuçao e realize a soma ou multi-
plicaçao, conforme um codigo de opera ̧c ̃ao tambem recebido por linha de execuçao.*/

#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);
int multiplicar(int a, int b);

int main(int argc, char *argv[]) {

  int va,vb,op,res;

  if(argc!=4){
    printf("formato incorreto!  <num1> <num 2> <op 1 ou 2>");
    exit(1);
  }

  va = atoi(argv[1]);
  vb = atoi(argv[2]);
  op =  *argv[3];

  printf("[%d],[%d],[%c]",va,vb,op);

  switch (op){
    case '1':
      res = somar(va,vb);
      break;

    case '2':
      res = multiplicar(va,vb);
      break;

    default:
    printf("operaçao invalida, op = 1 ou op = 2");     

  }

  printf("resultado => [%d]",res);

  return 0;
}

int somar(int a, int b){
  int y;
  y = a+b;
  return y;
}

int multiplicar(int a, int b){
  int y;
  y = a*b;
  return y;
}