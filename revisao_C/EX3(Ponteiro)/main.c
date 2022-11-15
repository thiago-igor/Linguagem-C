#include <stdio.h>

char matriz[] = {'a', 'b', 'c'};

char * pt_matriz = NULL; // ponteiro 

void imprimeMatrizUsandoPonteiro(){ // funçao usando ponteiro
 
    int idx = 0;
    do{
        
        printf("matriz[%d] = %c\n", idx, *pt_matriz);
        idx++;
        pt_matriz++;
    }while(idx < 3);
}

int main(void){
   
   pt_matriz = &matriz[0]; // apontando para matriz 

   imprimeMatrizUsandoPonteiro();

    return 0;
}

