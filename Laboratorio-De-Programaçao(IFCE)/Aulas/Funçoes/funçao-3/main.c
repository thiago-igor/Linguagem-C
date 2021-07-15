#include <stdio.h>
#include <stdlib.h>

// prototipo de funçao
int soma(int a, int b);
int multiplicar(int a, int b);

//argc: quantos termos foram digitagos +1
//argv: coleta os dados 

int main(int argc, char *argv[]) {

  int res, va=0, vb=0;
  

  if(argc!=4){
    printf("formato incorreto formato:<num1><num2><operaçao 1 (+)ou 2 (*)>");
    exit(1);
  }

  //atoi: transforma o char em int
  va = atoi(argv[1]);
  vb = atoi(argv[2]); 

  switch(atoi(argv[3])){
    case 1:
      res = soma(va,vb);
      break;
    
    case 2:
      res = multiplicar(va,vb);
      break;
      
    default:
      printf("operaçao invalida");
      exit(2);
  }

  printf("\nresultado =>%d",res);

  return 0;
}

// implementaçao da funçao
int soma(int a , int b){
	int y;
	y = a+b;
	return y;
}

int multiplicar(int a , int b){
	int y;
	y = a*b;
	return y;
}