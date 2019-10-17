#include <stdio.h>

/*Faca  uma  função  que  receba  como  parâmetro  um  vetor  X  
de  30  elementos  inteiros  e  retorne,  também  por  parâmetro,  
dois  vetores  A  e  B.    
•   O  vetor  A  deve  conter  os  elementos  pares  de  X.  
•   O  vetor  B,  deverá  conter  os  elementos  ímpares. */

int convert(int *vet, int *par, int *impar, int len){
	int pares = 0;

	// contando o numero de pares no vet
	for (int i=0; i<len; i++)
		if (vet[i] % 2 == 0)
			pares++;

	// atribuindo os numeros ao vetor dos pares
	int count = 0;
	for (int i=0; i<len; i++)
		if (vet[i] % 2 == 0)
			par[count++] = vet[i];

	// atribuindo os numeros ao vetor dos impares
	count = 0;
	for (int i=0; i<len; i++)
		if (vet[i] % 2 != 0)
			impar[count++] = vet[i];

	return pares;
}

int main(){
	// variavel que determina o tamanho do vetor
	const int len = 30;
	int vet[len], par[len], impar[len];

	//leitura do vetor
	for (int i=0; i<len; i++){
		scanf("%d", &vet[i]);
	}

	// pares recebera o numero de pares no vetor
	int pares = convert(vet, par, impar, len);

	// impressao dos pares
	printf("%d\n", par[0]);
	printf("\n=== pares ===\n");
	for (int i=0; i<pares; i++)
		printf("%d\n", par[i]);

	// impressao dos impares
	printf("=== impares ===\n");
	for (int i=0; i<(len - pares); i++)
		printf("%d\n", impar[i]);

    return 0;
}