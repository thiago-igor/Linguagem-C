#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3
#define MX 50


struct Media{  // tipos de dados
    int n1;
    int n2;
    int media;
};

int main(){
    struct Media m[TAM];

    srand(time(NULL));

    for(int k = 0;k<TAM;k++){
        m[k].n1 = rand()%MX;
        m[k].n2 = rand()%MX;
        m[k].media = m[k].n1 + m[k].n2;
    }

    for(int k = 0;k<TAM;k++){
        printf("\n%d + %d => %d\n",m[k].n1,m[k].n2,m[k].media);
    }

    
    return 0;
}

