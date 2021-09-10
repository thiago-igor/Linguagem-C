#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3
#define MX 100

struct coord{
    int x;
    int y;
};

int main(){
struct v[2];
int v[1];

    return 0;
}

void mudar(int k, char*nomearquivo, struc coord *p,int *v){
    FILE *fp;

    if(!(fp= fopen("nomeArquivo","wb"))){
        printf("erro ao escrever no arquivo: %s",nomeArquivo);
        exit(1);
    }

    //escrita no arquivo
if((fwrite(v, sizeof(int), TAM, fp)) != TAM){
    printf("erro!!!");
    exit(2);
}

int k=0;

(p+q).x-> v->a;
(p+q).y -> v->b;

fseek(fp, q *sizeof(int),1),fp);

fwrite(fp, sizeof(struct coord),1,fp);



}
    



        

    fclose(fp);

    return 0;
}