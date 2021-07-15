#include <stdio.h>
#include <string.h>
#define TAM 20

int main(void) {
  
  char str1[TAM], str2[TAM], str3[TAM*2];
  
  printf("digite o primeiro nome:");
  fgets(str1,TAM,stdin);

  
  printf("digite sobre-nome:");
  fgets(str2,TAM,stdin);

  strcat(str3,str1);
  strcat(str3,str2);
  printf("O Nome Completo E: \n%s",str3);



  return 0;
}