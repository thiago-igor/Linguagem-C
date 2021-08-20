#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define MX 50

typedef struct pm{
  int x;
  int maior;
}my_ts;

int main (int argc, char * argv[]){
  my_ts *c;
  int k;
  int tam;
  int m=0;

  if(argc !=2){
    printf("formato incorreto");
    exit(1);
  }

  srand(time(NULL));

    tam = atoi(argv[1]);

    c = (my_ts *) malloc(sizeof(my_ts)*tam);

    if(c == NULL){
        printf("memoria insuficiente!!!");
        exit(2);
    }

  for(k=0;k<tam;k++){
        (c+k)->x = rand() % MX;
    }

  printf("elementos do vetor:");
  for(k=0;k<tam;k++){
    if((c+k)->maior > m){
      m = (c+k)->maior;
    }
    
    printf("%d,",(c+k)->x);
  }

  printf("\nha %d elementos no vetor",tam);

  printf("\nendereco do vetor => %p",&c);
  

  return 0;
}