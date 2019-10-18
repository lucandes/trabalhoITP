#include <stdio.h>

/*Faca  um  programa  que  leia  três  valores  inteiros  e  chame  uma  função  que  receba  
estes  3  valores  de  entrada  e  retorne  eles  ordenados,  ou  seja,  o  menor  valor  na  
primeira  variável,  o  segundo  menor  valor  na  variável  do  meio,  e  o  maior  valor  na  
última  variável.    
•   A   função   deve   retornar   o   valor   1   se   os   três   valores   forem   iguais   e   0   se  
existirem  valores  diferentes.    
•   Exibir  os  valores  ordenados  na  tela.  */

int ordem(int vet[3]){
	// vetor para guardar os numeros temporariamente
	int temp[3];
	// vetor para facilitar a validacao
	int o[] = {0, 1, 2, 0, 1};

	if (vet[0] == vet[1] && vet[1] == vet[2])
		return 1;

	// menor numero
	for(int i=0; i<3; i++){
		// se o numero for menor que os demais no vetor
		if (vet[o[i]] < vet[o[i+1]] && vet[o[i]] < vet[o[i+2]]){
			temp[0] = vet[i];
			break;
		}
		// caso exista um igual
		else if (vet[o[i]] == vet[o[i+1]]){
			temp[2] = vet[i];
			break;
		}
	}

	// numero do meio
	for(int i=0; i<3; i++){
		// se o numero for menor que um e maior que outro no vetor
		if (vet[o[i]] < vet[o[i+1]] && vet[o[i]] > vet[o[i+2]]){
			temp[1] = vet[i];
			break;
		}
		// se o numero for maior que um e menor que outro no vetor
		else if (vet[o[i]] > vet[o[i+1]] && vet[o[i]] < vet[o[i+2]]){
			temp[1] = vet[i];
			break;
		}
		// caso exista um igual
		else if (vet[o[i]] == vet[o[i+1]]){
			temp[2] = vet[i];
			break;
		}
	}

	// maior numero
	for(int i=0; i<3; i++){
		// se o numero for maior que os demais no vetor
		if (vet[o[i]] > vet[o[i+1]] && vet[o[i]] > vet[o[i+2]]){
			temp[2] = vet[i];
			break;
		}
		// caso exista um igual
		else if (vet[o[i]] == vet[o[i+1]]){
			temp[2] = vet[i];
			break;
		}
	}

	// o vetor vet recebera os valores de temp
	for (int i=0; i<3; i++){
		vet[i] = temp[i];
	}

	return 0;

}

int main(){
	int vet[3];
	
	// leitura dos valores
	printf("Digite tres valores: ");
	for (int i=0; i<3; scanf("%d", &vet[i++]));

	int resultado = ordem(vet);

	if (!resultado){
		// impressao dos valores
		printf("Ordem crescente:\n");
		for (int i=0; i<3; printf("%d ", vet[i++]));
		printf("\n");
	}
	else
		printf("Os tres numeros sao iguais!\n");


    return 0;
}