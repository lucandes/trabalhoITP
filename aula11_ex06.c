#include <stdio.h>

/*Faça  um  programa  que  receba  três  números
 e  mostre-­os  em  ord  crescente.  */

int main(){
	// recebendo numeros do usuario
	printf("Insira 3 inteiros: ");
	int num[3];
	scanf("%d", &num[0]);
	scanf("%d", &num[1]);
	scanf("%d", &num[2]);

	// ordem utilizada para validar com facilidade
	int ord[5] = {0, 1, 2, 0, 1};

	// verificando se existem nums iguais
	// sera utilizado o mesmo padrao para toda validacao
	for (int i=0; i<3; i++){

		// se determinado numero for igual a algum outro no vetor
		if (num[ord[i]] == num[ord[i+1]] || num[ord[i]] == num[ord[i+2]]){
			printf("Numeros iguais\n");
			return 1;
		}
	}

	printf("\nOrdem crescente:\n");


	// imprimir o menor

	for (int i=0; i<3; i++){
		// se determinado numero for menor que todos no vetor
		if (num[ord[i]] < num[ord[i+1]] && num[ord[i]] < num[ord[i+2]])
			printf("%d ", num[ord[i]]);
	}

	// imprimir o do meio

	for (int i=0; i<3; i++){
		// se determinado numero for menor que algum 
		// numero e maior que outro numero no vetor
		if (num[ord[i]] < num[ord[i+1]] && num[ord[i]] > num[ord[i+2]])
			printf("%d ", num[ord[i]]);

		// mesmo caso de cima porem com sinais invertidos
		else if (num[ord[i]] > num[ord[i+1]] && num[ord[i]] < num[ord[i+2]])
			printf("%d ", num[ord[i]]);
	}

	// imprimir o maior

	for (int i=0; i<3; i++){
		// se determinado numero for maior que todos no vetor
		if (num[ord[i]] > num[ord[i+1]] && num[ord[i]] > num[ord[i+2]])
			printf("%d ", num[ord[i]]);
	}


	// quebra de linha final
	printf("\n");

    return 0;
}