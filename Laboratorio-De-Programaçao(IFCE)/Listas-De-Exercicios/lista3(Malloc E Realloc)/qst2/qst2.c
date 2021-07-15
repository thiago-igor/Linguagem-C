#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COMEÇO -200
#define FIM 200

int main(void) {
  int lin,col,i;
  int *p=NULL;

  srand(time(NULL));

  printf("\n[MATRIZ N X N]:\t\n\n");

  printf("Digite Um Numero Para Ser A [Coluna] E A [Linha] Da Matriz =>");
  scanf("%d",&lin);
  col = lin;

  p = (int *) malloc(sizeof(int)*col*lin);
  
  for(i=0;i<(lin*col);i++){
    *(p+i) = COMEÇO + rand() % (FIM+1-COMEÇO);
  }


  printf("MATRIZ GERADA:\n");
  for(i=0;i<(lin*col);i++){
    printf("[ %d ]",*(p+i));
    if((i+1) % col == 0)
      printf("\n");
 }

  //diagonal principal 
  for (i=0; i<lin*lin; i+=(lin+1)){
    printf("%d ", *(p+i));
  }
  puts("");


  return 0;
}