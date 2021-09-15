#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int MENOR(int *matriz, int linha, int coluna);


typedef struct node{
  int lin;
  int col;
  int menorElem;
	int *pDados;
}myMatrix;


int main(int argc, char *argv[]){
	if(argc!=3){
		printf("Formato:\n\t%s <Numerdodelinhas> <Numerodecolunas>", argv[0]);
		exit(1);
	}
	// vetor[lin][col];
	int lin = atoi(argv[1]);
	int col = atoi(argv[2]);
	// ALOCAR:	
	int *vetor= malloc( sizeof(int)*lin*col );
	// PREENCHIMENTO:
	srand(time(NULL));
	for(int c=0; c<lin*col; c++){
		*(vetor+c) = rand()%MX;
	}
	
	myMatrix estrutura;
	estrutura.lin = lin;
	estrutura.col = col;
	estrutura.pDados = vetor;
	estrutura.menorElem = MENOR(vetor, lin, col);

	// MOSTRAR:
	for(int l=0; l<lin; l++){
		// quebra de linha para exibir a matriz:
		printf("\n");

		for(int c=0; c<col; c++){
			printf("%d ", *(vetor+c+l));
		}
	}
	printf("\nMENOR: %d\n", estrutura.menorElem);
	return 0;
}
int MENOR(int *MATRIZ, int linha, int coluna){
	int menor=*MATRIZ;
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			if( *(MATRIZ+i+j) < menor){
				menor = *(MATRIZ+i+j);
			}
		}
	}
	return menor;
}