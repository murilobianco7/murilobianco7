#include <stdlib.h>
#include <stdio.h>

	int main(){
	int x, y, z, j, c, total , num, rep, ct, temporaria;
	int **matriz;
	int *vetor;
	int *tmp;
	int maior, menor;
	
	do {
		printf("Numero de linhas (3 a 6): ");
		scanf("%d", &x);
	}while(x < 3 || x > 6);
	
	do {
		printf("Numero de colunas (4 a 8): ");
		scanf("%d", &y);
	}while(y < 4 || y > 8);
	
	if(matriz){
		("Alocação realizada");
		matriz=malloc(x*sizeof(int*));
		for (z=0; z<x; z++){
			matriz[z] = malloc(y * sizeof(int));
		}
	} else {
		printf("Erro ao alocar a memoria");
	}
	
	total = x * y;
	
	tmp = malloc(total * sizeof(int));
	vetor = malloc(total * sizeof(int));
	
	for(z = 0; z < x; z++){
		for(j = 0; j < y; j++){
			do{
				num = rand()% 91+10;
				rep = 0;
				for(c = 0; c < ct; c++){
					if (tmp[x] == num){
					rep =1;
					}
				}
				}while(rep);
				matriz[z][j] = num;
				tmp[ct++] = num;
			}
		}
		printf("Matriz:\n");
		for(z = 0; z < x; z++){
			for(j = 0; j < y; j++){
				printf("%3d ", matriz[z][j]);
			}
			printf("\n");
		}
		c = 0;
		
		for(z=0; z < x; z++){
			for(j = 0; j < y; j++){
				vetor[c++] = matriz[z][j];
			}
		}
		
		for(z=0; z < total; z++){
			for(j=z+1; j < total; j++){
				if (vetor[z] > vetor[j]){
					temporaria = vetor[z];
					vetor[z] = vetor[j];
					vetor[j] = temporaria;
				}
			}
		}
		
		for(z = 0; z < x; z++){
			for(j = 0; j < y; j++){
				if(matriz[z][j] < menor){
					menor = matriz[z][y];
				}
				if(matriz[z][j] > maior){
				maior = matriz[z][j];
				}
			}
		}
		
		printf("vetor ordenado: \n");
		for(z = 0; z <total; z++){
			printf("%d ", vetor[z]);
		}
		printf("\n");
		
		printf("Menor numero: %d", menor);
		printf("Maior numero: %d", maior);
		
       for(z = 0; z < x; z++){
       	free(matriz[z]);
	   }
	   free(matriz);
}
