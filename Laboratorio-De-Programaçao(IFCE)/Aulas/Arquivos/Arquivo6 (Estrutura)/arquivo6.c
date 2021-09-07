// acessar um numero da sequencia de fibonat
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 5
#define MX 100

struct coord{
    int x;
    int y;
};

void ExibirDados(struct coord *, int);

int main(int argc, char * argv[]){
FILE *fp;
struct coord v[TAM];
struct coord b;

if(argc!=2){
    printf("formato correto -> <NUM>");
}

int pos = atoi(argv[1]);
if(pos>TAM-1){
    printf("excedeu o limite do indice");
    exit(1);
}

srand(time(NULL));

// sequencia:
for(int k =0; k<TAM;k++){
    v[k].x = rand()%MX;
    v[k].y = rand()%MX;
}

//imprimir
ExibirDados(v, TAM);

printf("\n");

//abrir arquivo 
if(!(fp = fopen("fib.dat","wb+"))){
    fprintf(stdout,"Erro ao abrir o arquivo!\n");
    exit(2);
}

//escrita no arquivo
if((fwrite(v, sizeof(struct coord), TAM, fp)) != TAM){
    printf("erro!!!");
    exit(2);
}

//reposicionar ponteito
//rewind(fp);
fseek(fp, pos*sizeof(struct coord),SEEK_SET); // esse quatro esta mostrando a posiçao que quero, a 9

//leitura
fread(&b, sizeof(struct coord),1,fp);

printf("\nvalor X: %d\n",b.x);
printf("valor Y: %d",b.y);

fclose(fp);

    return 0;
}

void ExibirDados(struct coord *p, int tamanho){
    for(int k=0;k<tamanho;k++){
        printf("\nIndice: %d\n",k);
        printf("x: %d - y: %d\n",(p+k)->x,(p+k)->y);
        printf("------------");
    }
}
