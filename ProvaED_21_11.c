#include <stdio.h>
#include <stdlib.h>

#define true 1
typedef struct no{

	int chave;
	struct no *prox;
}Tno;

typedef struct inifim{

	Tno *ini;
	Tno *fim;
}IniFim;

void cabeca(IniFim **prim){

	Tno *aux = (Tno*)malloc(sizeof(Tno));
	if(aux == NULL) return;
	
	aux->chave = 200;
	aux->prox = NULL;
	
	(*prim)->ini = (*prim)->fim = aux;
}

void alocaFila(IniFim **prim, int n){

	if(*prim == NULL) return ;
	
	Tno *aux = (Tno*)malloc(sizeof(Tno));
	if(aux == NULL) return;
	
	aux->prox = NULL;
	aux->chave = n;
	
	(*prim)->fim->prox = aux;
	(*prim)->fim = aux;

}

void printaFila(IniFim **prim){

	if(*prim == NULL) return ;
	
	Tno *aux = (*prim)->ini->prox;
	if(aux == NULL) return;
	
	while(true){
	
		printf("%d\n",aux->chave);
		if(aux->prox == NULL) return;
		aux=aux->prox;
	
	}	
}

int operacao(IniFim **prim, int res){

	Tno *aux = (*prim)->ini->prox, *aux2;
	if(aux == NULL){
	
		free((*prim)->ini); // free cabeça
		(*prim)->ini->prox = NULL; // cabeca aponta pra nulo
		(*prim)->ini = NULL; // ini fim aponta pra nulo
		(*prim)->fim = NULL;
		return 0;
	}
	while(true){
	
		if(aux->chave%2 == 0) res*=aux->chave;
		else res+=aux->chave;
		
		if(aux->prox == NULL){
			
			free(aux);
			aux->prox = NULL;
			free((*prim)->ini); // free cabeça
			(*prim)->ini->prox = NULL;
			(*prim)->ini = NULL;
			(*prim)->fim = NULL;
			
			
			return res;
		}
		
		aux2=aux->prox;
		free(aux);
		aux->prox = NULL;
		aux = aux2;
	
	}
	
}

/*void verificaFree(IniFim **prim){

	if((*prim)->ini == NULL && (*prim)->fim == NULL) puts("ok");

}*/

int main(){

	int res=0,n;
	IniFim *prim = (IniFim*)malloc(sizeof(IniFim));
	if(prim == NULL) return 0;
	
	cabeca(&prim);

	while(1){
	
		scanf("%d",&n);
		if(n==151) break;
		alocaFila(&prim,n);
	
	}
	
	res = operacao(&prim,res);
	
	printf("%d\n",res);
	
	//verificaFree(&prim);
	
	free(prim);
	prim = NULL;
	
	//if(prim == NULL) puts("ok");
	
}
