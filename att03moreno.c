#include <stdio.h>
#include <stdio.h>
#include <time.h>

typedef struct apelido_no{
	int valor;
	struct apelido_no *ant;
	struct apelido_no *prox;	
}no;

void inserirInicio(no **lista, int num);
void inserirFim(no **lista, int num);
void inserirMeio(no **lista, int num, int refere);
void imprimir(no *lista);
void remover(no **lista, int num);
void inserirAleatorio(no **lista);

void inserirInicio(no **lista, int num){
	no *novo = malloc(sizeof(no));
	
	novo->valor=num;
	novo->ant=NULL;
	novo->prox=*lista;
	if(*lista!=NULL)
		(*lista)->ant=novo;
		*lista=novo;
}
void inserirFim(no **lista, int num){
	no *novo = malloc(sizeof(no));
	
	novo->valor=num;
	novo->prox=NULL;
	if(*lista == NULL){
		novo->ant = NULL;
		*lista = novo;
		return 0;
	}
	no *aux = *lista;
	while(aux->prox != NULL)
		aux=aux->prox;
		
	aux->prox=novo;
	novo->ant=aux;
}

void inserirMeio(no **lista, int num, int refere){
	no *aux=*lista;
	while(aux!=NULL && aux->valor!=refere)
		aux = aux->prox;
	if(aux==NULL){
		printf("Nao encontrado");
		return;
	}
	no *novo=malloc(sizeof(no));
	
	novo->valor= num;
	novo->ant= aux;
	novo->prox = aux->prox;
	if(aux->prox!=NULL)
		aux->prox->ant = novo;
	
		aux->prox = novo;
}
void imprimir(no **lista){
	printf("Lista\n");
	
	while(lista!=NULL){
		printf("%d", lista->valor);
		lista = lista->prox;
	}
	printf("\n");
}
void remover(no **lista, int valor){
	if(*lista == NULL){
		printf("Lista vazia\n");
		return;
	}
	
}

int main(){
	
}
