#include <stdio.h>

  // prototipo de funçao
  int soma(int , int );

int main() {
  
  int x,y,s;

  // leitura de dados
  printf("digite os valores x e y:");
  scanf("%d%d",&x,&y);

  //processo
  s = soma(x,y);

  //saida
   printf("%d + %d = %d", x, y, soma(x, y));

  return 0;
}

// implementaçao da funçao
int soma(int a , int b){
int y;
y = a+b;
return y;
}