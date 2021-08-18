#include <stdio.h>
#include <stdlib.h>



int main(int argc, char * argv[]){
    int tam, *p;

    if (argc != 2){
        printf("formato correto <Tamanho Do Vetor>");
        exit(1);
    }

    tam = atoi(argv[1]);

    p = (int *) malloc(tam * sizeof(int));   
    
     




    return 0;
}