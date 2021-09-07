// acessar um numero da sequencia de fibonat

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
FILE *fp;
int v[TAM] = {0,1};
int b=0;

// sequencia:
for(int k =0; k<TAM;k++){
    v[k+2] = v[k] + v[k+1];
}

//imprimir
for(int k=0;k<TAM;k++){
    printf("%d ",v[k]);
}

printf("\n");

//abrir arquivo 
if(!(fp = fopen("fib.dat","w+"))){
    fprintf(stdout,"Erro ao abrir o arquivo!\n");
    exit(2);
}

//escrita no arquivo
if((fwrite(v, sizeof(int), TAM, fp)) != TAM){
    printf("erro!!!");
}

//reposicionar ponteito
//rewind(fp);
fseek(fp, 9*sizeof(int),SEEK_SET); // esse nove esta mostrando a posiçao que quero, a 9

fread(&b, sizeof(int),1,fp);

printf("\nvalor lido: %d\n",b);

fclose(fp);

    return 0;
}