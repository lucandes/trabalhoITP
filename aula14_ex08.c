#include <stdio.h>

 /*Faça  um  programa  que  receba  do  usuário  dois
vetores,  A  e  B,  com  X  números  inteiros  cada  
(solicitar  ao  usuário  o  número  X,  definir  como  
máximo  20  elementos).  Crie  um  novo   vetor   
denominado   C   calculando   C   =   A(ordem   direta)   –   B(ordem   invertida).  
Mostre  na  tela  os  dados  do  vetor  C.   */

int main(){
	int X;
	printf("Insira um valor para X: ");
	scanf("%d", &X);

	int A[X], B[X], C[X];

	// recebendo valores de A
	for (int i=0; i<X; i++){
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}

	// quebra de linha
	printf("\n");
	
	// recebendo valores de B
	for (int i=0; i<X; i++){
		printf("B[%d]: ", i);
		scanf("%d", &B[i]);
	}

	// atribuindo valores ao vetor C
	for (int i=0; i<X; i++){
		C[i] = A[i] - B[X - (i+1)];
	}

	// quebra de linha
	printf("\n");

	// printando valores de C
	for (int i=0; i<X; i++)
		printf("C[%d]: %d\n", i, C[i]);

    return 0;
}