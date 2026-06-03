#include <stdio.h>
#include <stdlib.h>

typedef struct apelido_no {
	int valor;
	struct apelido_no *proximo;	
}no;

void inserirInicio();
void inserirFim();
void inserirMeio();
void inserirAleatorio();
void imprimir();
void remover();

void inserirInicio(no **Lista, int num){
	no *novo=malloc(sizeof(no));
	
	if (novo) {
		novo->valor=num;
		novo->proximo=*Lista;
		*Lista=novo;
	} else {
		printf("Erro ao alocar memoria\n");
	}
}

void inserirFim(no **Lista, int num){
	no *aux, *novo=malloc(sizeof(no));
	if(novo){
		novo->valor=num;
		novo->proximo=NULL;
		if(*lista==NULL){
		*lista=novo;
		}else {
			aux=*Lista;
			while(aux->proximo)
			aux=aux->proximo;
		aux->proximo=novo;
		}
	} else {
		printf("Erro ao alocar memoria\n");
	}
}

void inserirMeio(no **Lista, int valor, int ant){
	no *aux, *novo=malloc(sizeof(no));
	if(novo){
		novo->valor=num;
		if(*Lista==NULL){
			novo->proximo=NULL;
			*Lista=novo;
		} else {
			aux=*Lista;
			while(aux->valor != ant && aux->proximo)
			aux=aux->proximo;
			novo->proximo=aux->proximo;
			aux->proximo=novo;
		}
	} else {
		printf("Erro ao alocar memoria");
	}
}
void imprimir(no *no){
	printf("Lista: ");
	while(no){
		printf("%d ", no->valor);
		no=no->proximo;
	}
	printf("\n");
}
void remover(no **Lista, int valor){
	if(*Lista == NULL){
		printf("Lista vazia\n");
	}
}

int main(){
	int opcao;
	no *Lista = NULL;
	
	do {
		printf("\nMENU\n")
		printf("\n1: Inserir no inicio \n");
		printf("\n2: Inserir no fim");
		printf("\n3: Inserir no meio\n");
		printf("\n4Inserir 10 elementos aleatorios \n");
		printf("\n5Imprimir lista\n");
		printf("\n6Remover elemento\n");
		printf("\nOpcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				inserirInicio();
				break;
			case 2:
				inserirFim();
				break;
			case 3:
				inserirMeio();
				break;
			case 4:
				inserirAleatorio();
				break;
			case 5: 
				imprimir();
				break;
			case 6:
				remover();
				break;
			}		
		} while(opcao >= 7);
}
