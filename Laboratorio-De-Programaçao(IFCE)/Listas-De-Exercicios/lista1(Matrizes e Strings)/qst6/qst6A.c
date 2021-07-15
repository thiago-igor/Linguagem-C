// concatenar (unir) duas strings sem usar a funçao strcat()
#include <stdio.h>
#include<string.h>
#define TAM 25 
int main(void) {

  int n,s,i;
  char str1[TAM], str2[TAM], str3[TAM*2];
  
  printf("digite o primeiro nome:");
  fgets(str1,TAM,stdin);

  
  printf("digite sobre-nome:");
  fgets(str2,TAM,stdin);

  n = strlen(str1); //tamanho das strings
  s = strlen(str2);

  for(i=0;i<n;i++){ //preenchendo a string
    str3[i]=str1[i];
  }

  for(i=0;i<s;i++){ //preenchendo a string
    str3[n+i]=str2[i];
  }

  printf("%s",str3);

  return 0;
}