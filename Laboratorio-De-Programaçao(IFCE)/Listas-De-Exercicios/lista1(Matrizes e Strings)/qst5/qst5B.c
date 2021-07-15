#include <stdio.h>
#include <string.h>
#define TAM 20

int main(){

  char str1[TAM], str2[TAM];

  printf("digite uma string:");
  fgets(str1,TAM,stdin);

  printf("digite uma string:");
  fgets(str2,TAM,stdin);

  if(strcmp(str1,str2)==0) // funçao strcmp(), volta (0) se as strings sao iguais e (1) se sao diferentes 
    printf("as strings sao iguais!!!");
  else
    printf("as strings sao diferentes!!!");

  return 0;
}