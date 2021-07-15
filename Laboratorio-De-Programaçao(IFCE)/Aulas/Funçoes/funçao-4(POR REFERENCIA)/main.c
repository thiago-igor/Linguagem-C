#include <stdio.h>
#include <stdlib.h>

// prototipo de funçao
void soma(int , int , int *);
void multiplicar(int , int , int *);

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
       soma(va,vb,&res);
      break;
    
    case 2:
       multiplicar(va,vb,&res);
      break;
      
    default:
      printf("operaçao invalida");
      exit(2);
  }

  printf("\nresultado =>%d",res);

  return 0;
}

// implementaçao da funçao
void soma(int a , int b, int *p){
  *p = a + b;	
}

void multiplicar(int a , int b,int *p){
	*p = a*b;
}