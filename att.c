#include <stdio.h>
#include <stdlib.h>

	void push(int item);
	void pop();
	void imprimir();
	void automatico();
	int entrada_dados();
	
	typedef struct no{
		int dado;
		struct no *prox;	
	}NO;
	
	NO *top=NULL;

	int main(){
	int n, opcao;
	
	do{
		system("cls");
		printf("\nMenu\n1. Empilhar \n2. Desempilhar\n3. Imprimir \n4. Empilhar automaticamente\n5. Mostrar Maior\n6. Sair\n");
		printf("Escolha a opcao (0-6): ");
		scanf("%d", &opcao);
			switch(opcao){
				case 1:
					n=entrada_dados();
					push(n);
					break;
				case 2: 
					pop();
					break;
				case 3:
					imprimir();
					break;
				case 4:
					automatico();
					break;
				case 5:
					maior();
					break;
			}
	}while(opcao!=6);
	system("pause");
	return 0;
	}
	
	void push(int item){
		printf("\nEmpilhando.. \n");
		NO *novo=malloc(sizeof(NO));
		novo->dado=item;
		novo->prox=top;
		top=novo;
		printf("\nValor %d empilhado\n", novo->dado);
		system("pause");
	}
	
	void pop(){
		printf("\nDesempilhando... \n");
		if(top==NULL)
			printf("A pilha esta vazia");
		else {
			NO *temp;
			temp=top;
			top=top->prox;
			printf("\nDesempilhado com sucesso\n ", temp->dado);
			free(temp);
		}
		system("pause");
	}
	void imprimir(){
		NO *temp;
		temp=top;
		printf("\nImprimindo pilha... \n");
		while (temp!=NULL){
			printf("%d\n", temp->dado);
			temp=temp->prox;
			}
			system("pause");
	}
	void automatico(){
		int i, j;
		
		for(i=0; i<5; i++){
			j=(rand() % 91) + 10;
			push(j);
		}
		printf("\nEmpilhados com sucesso!\n");
		system("pause");
	}
	void maior(){
		int mai;
		NO *x;
		
		mai = top -> dado;
		x = top;
		while(x != NULL){
			if(x -> dado > mai){
				mai = x-> dado;
			}
			x = x ->prox;
		}
		//return mai;
		printf("Maior valor: %d\n", mai);
		system("pause");
	}
	
		int entrada_dados(){
		int valor;
		printf("\nEntre com valor a empilhar: ");
		scanf("%d", &valor);			
		return valor;
}
