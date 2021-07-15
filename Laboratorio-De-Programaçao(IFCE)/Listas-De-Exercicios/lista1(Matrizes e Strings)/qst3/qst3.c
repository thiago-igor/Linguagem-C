// fazendo string e percorrendo
#include <stdio.h>
#define TAM 20

int main() {
  
  int i,cont=0;
  char str[TAM], cha;

  printf("digite uma palavra:");
  fgets(str, TAM ,stdin); // faz o papel do scanf, porem de forma vetorial para uma string

  printf("digite uma letra:");
  scanf("%c",&cha);

  printf("string:%s",str);

  printf("caracter:%c",cha);

  for(i=0;i<TAM;i++){// percorrer o vetor e ver se algum elemento e igual ao caracter digitado
    if(str[i]==cha){ 
      cont++;
    }
  }
  if(cont>=1){
    printf("\ntemos um termo da string compativel com o caractere!!!");
  }
  else{
    printf("\nnenhum termo compativel com a string");
  }

  return 0;
}