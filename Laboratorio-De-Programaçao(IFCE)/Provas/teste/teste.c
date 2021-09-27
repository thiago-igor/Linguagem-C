#include <stdio.h>

int main(){

char senha[20];

    printf("Digite a senha:");
    fgets(senha,20,stdin);

    printf("%c",senha);


    if(senha =="vida/n"){
        printf("parabens, voce e o amor da minha vida");
    }

    else
        printf("sai daqui sua intrusa!!!");

    return 0;
}