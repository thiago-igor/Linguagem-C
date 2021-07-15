#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(int argc, char *argv[]) {
  int va,vb,i,k;
  int *pa=NULL,*pb=NULL,*pc=NULL;

  srand(time(NULL));

  if(argc!=3){
    printf("formato incorreto formato:<num1><num2>");
    exit(1);
  }

  va = atoi(argv[1]);
  vb = atoi(argv[2]); 

  pa = (int *) malloc(sizeof(int)*va);
  pb = (int *) malloc(sizeof(int)*vb);
  pc = (int *) malloc(sizeof(int)* va * vb);


  if(!pa && !pb){ 
    printf("memoria insuficiente!!!");
    exit(1);
  }


  
  for(i =0;i<va;i++){
    *(pa+i) = rand() % TAM;
  }
  for(i =0;i<vb;i++){
    *(pb+i) = rand() % TAM;
  }

  printf("vetor [A]:");
  for(i=0;i<va;i++){
    printf("%d,",*(pa+i));
  }
  
  
  printf("\nvetor [B]:");
  for(i=0;i<vb;i++){
    printf("%d,",*(pb+i));
  }

  int cont=0;
  for(i=0;i<va;i++){
    for(k=0;k<vb;k++){
      if(*(pa+i)==*(pb+k)){
        *(pc+i) = *(pa+i);
        cont++;
      }

    }
  }

  printf("\nvetor [C]:");
  for(i=0;i<cont;i++){
    printf("%d,",*(pc+i));
  }

  return 0;
}