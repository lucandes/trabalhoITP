#include <stdio.h>
#include <stdlib.h>

/*Inicialize uma matriz de 5 x 5 elementos.
a. Calcule a soma dos elementos que estão acima da diagonal principal.
b. Calcule a soma dos elementos que estão abaixo da diagonal principal.
c. Calcule a soma dos elementos que estão na diagonal principal.
d. Imprima somente os números que estão acima da diagonal principal (utilize o “\t”
para manter o formado da tabela, conforme exemplo da direita).
e. Imprima somente os números que estão abaixo da diagonal principal.*/

int main(){
	const int N = 5;

	// inicializando uma matriz de tamanho 5x5
	int matriz[N][N];

	// recebendo entrada do usuario
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			printf("matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	// soma de numeros acima da diagonal
	int somaAcima = 0;
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if (j > i)
				somaAcima += matriz[i][j];
		}
	}

	// soma de numeros abaixo da diagonal
	int somaAbaixo = 0;
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if (j < i)
				somaAbaixo += matriz[i][j];
		}
	}

	// soma de numeros na diagonal
	int somaDiag = 0;
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if (j == i)
				somaDiag += matriz[i][j];
		}
	}

	// impressao das somas
	printf("\nSoma dos numeros acima da diagonal: %d\n", somaAcima);
	printf("Soma dos numeros abaixo da diagonal: %d\n\n", somaAbaixo);
	
	// impressao de numeros acima da diagonal
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if (j > i)
				printf("%d", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	// impressao de numeros abaixo da diagonal
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if (j < i)
				printf("%d", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}

    return 0;
}