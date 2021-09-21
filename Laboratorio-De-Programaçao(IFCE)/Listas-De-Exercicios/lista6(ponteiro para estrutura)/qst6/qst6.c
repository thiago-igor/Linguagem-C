//Exemplifique, com codigo, Enumeraçoes em C.

#include <stdio.h>

enum diasSemana{
    DOM=1,SEG,TER,QUA,QUI,SEX,SAB // Como DOM = 1 , ele completa automaticamente o resto, ex: SEG = 2 , TER= 3...
};

int main(){
    enum diasSemana ds;

    char *nomeDias [] = {"","DOMINGO","SEGUNDA-FEIRA","TERCA-FEIRA","QUARTA-FEIRA","QUINTA-FEIRA","SEXTA-FEIRA","SABADO"};

    for(ds = DOM; ds<=SAB;ds++){ // usamos a semantica no laço, que representa os numeros.
        printf("%s\n",nomeDias[ds]);
    }


    return 0;
}