#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de 3 x 3 elementos. 
Calcule e imprima a sua transposta. 
Matriz transposta é a matriz que se 
obtém da troca de linhas por colunas*/

int main(){
	// declarando variavel para o tamanho da matriz
	const int len = 3;

	// declarando matriz com 3x3 elementos de alocacao dinamica
	int **matriz = (int **) malloc(len * sizeof(int));
	for (int i=0; i<len; matriz[i++] = (int *) malloc(len * sizeof(int)));

	// leitura de elementos da matriz
	for (int i=0; i<len; i++){
		for (int j=0; j<len; j++){
			printf("matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	// impressao da matriz original
	printf("\n===  original  ===\n");
	for (int i=0; i<len; i++){
		for (int j=0; j<len; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	// impressao da matriz transposta
	printf("\n=== transposta ===\n");
	for (int i=0; i<len; i++){
		for (int j=0; j<len; j++){
			printf("%d\t", matriz[j][i]);
		}
		printf("\n");
	}

    return 0;
}