#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(int argc, char *argv[]) {
  int v,i,va[2];
  int *pv=NULL;

  srand(time(NULL));

  if(argc!=2){
    printf("formato incorreto formato:<num1>");
    exit(1);
  }

  v = atoi(argv[1]); 

  pv = (int *) malloc(sizeof(int)*v);

  if(!pv){ 
    printf("memoria insuficiente!!!");
    exit(1);
  }

  for(i =0;i<v;i++){
    *(pv+i) = rand() % TAM;
  }

  printf("vetor [C]:");
  for(i=0;i<v;i++){
    printf("%d,",*(pv+i));
    if(*(pv+i)%2==0){
    va[0] = *(pv+i);
    }
    if(*(pv+i)%2!=0){
      va[1] = *(pv+i);
    }
  }
  
  

  printf("\n%p\n",&va[0]);
  printf("%p\n",&va[1]);

  return 0;
}