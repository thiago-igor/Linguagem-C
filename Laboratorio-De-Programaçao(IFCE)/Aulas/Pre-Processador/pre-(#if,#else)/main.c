// diretivas #if, #else, #elif, #endif

#include <stdio.h>

#define T 45

int main(){

    #if T<20
    printf("instrucao 1 sera a compilada\n");
    #elif T<50
    pritf("instrucao 2 sera a compilada");
    #elif T<80
    pritf("instrucao 3 sera a compilada");
    #else
    printf("instrucao 4 sera a compilada");
    #endif

    return 0;
}