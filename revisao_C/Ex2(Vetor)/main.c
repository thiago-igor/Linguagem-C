#include <stdio.h>

char matriz[] = {'a', 'b', 'c'};

int main(void){

   for (int idx = 0; idx < 3; idx++)
   {
    printf("matriz[%d] = %c\n", idx, matriz[idx]);
   }
   

    return 0;
}