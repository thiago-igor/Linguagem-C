// Diretivas #ifdef, #ifndef, #if defined, #undef

#include <stdio.h>

#define T 45

int main(){

#ifdef T // ifdef verifica se T foi definido ou nao  (if defined == ifdef)
    printf("instrucao 1 sera compilada");
#else
    printf("instrucao 2 sera compilada")
#endif

#undef T // apaga o que foi definido em T



    return 0;
}