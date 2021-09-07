//oprerador # (bota aspas duplas em o que foi escrito )
//operador ## () concatena as variaveis, ou seja, junta 

#include <stdio.h>

#define prepararString(s) # s

#define concat(s1,s2) s1 ## s2

int main(){
 
    printf(prepararString(Ola BOM DIA)); // o "s" la do define esta colocando as aspas do printf

    int xy = 100;
    printf("%d\n",concat(x,y));



    return 0;
}