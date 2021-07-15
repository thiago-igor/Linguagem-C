#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3
#define TAM 10
#define linha "\n---------------\n"

int main(void) {
  
  unsigned int m[L][C]; 
  int i,j,k=0, v[k];

  srand(time(NULL));
  printf(linha);
  for(i=0;i<L;i++){
    printf("\n");
    for(j=0;j<C;j++){
      m[i][j] = rand() %TAM;
      printf("%d\t",m[i][j]);
      if(i==j){
        v[k] = m[i][j];
        k++;  
      }
    }
  }

  printf(linha);
  printf("A Diagonal Principal E =>\n");
  for(k=0;k<L;k++){
    printf("%d,",v[k]);
  }
  printf(linha);
    return 0;
}