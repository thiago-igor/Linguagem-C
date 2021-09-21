//Escreva um programa que concatene duas strings utilizando ponteiros.
#include <stdio.h>
#include <string.h>
#define TAM 10

int main(void) {
  
  char str1 [TAM];
  char str2 [TAM];
  char str3 [2*TAM];
  int t1,t2;

  printf("digite a string1:");
  fgets(str1,TAM,stdin);
  printf("digite a string2:");
  fgets(str2,TAM,stdin);

  t1 = strlen(str1);
  t2 = strlen(str2);

  for(int i=0;i<t1;i++){
    str3[i] = str1[i];
  }
  for(int j=0;j<t2;j++){
    str3[t1 + j] = str2[j];
  }

  printf("str3 => \n%s",str3);

  return 0;
}