#include <stdio.h>

/*   Faça  um  programa  para  ler  10  números  
DIFERENTES  a  serem  armazenados  em  um  
vetor.  Os  dados  deverão  ser  armazenados  
no  vetor  na  ordem  que  forem  sendo  lidos,  
sendo   que   caso   o   usuário   digite   um 
número   que   já   foi   digitado   anteriormente,
o  programa  deverá  pedir  para  ele  digitar  
outro  número.  Note  que  cada  valor  digitado  
pelo  usuário  deve  ser  pesquisado  no  vetor,
verificando  se  ele  existe  entre  os  números  
que  já  foram  fornecidos.  Exibir  na  tela  o  
vetor  final  que  foi  digitado. */

int main(){
	int vet[10];
	// conta o numero de inteiros declarados
	int index = 0;
	// caso exista um numero igual no vetor, possui = 1
	int possui;

	// repita ate que os 10 espacos do vetor
	// tenham sido preenchidos com inteiros
	do {
		printf("vet[%d]: ", index);
		scanf("%d", &vet[index]);

		possui = 0;
		// para cara inteiro armazenado no vetor
		for (int i=0; i<index; i++){

			// se existir algum numero igual
			if (vet[index] == vet[i]){
				printf("Erro: vetor ja recebeu este numero\n");
				printf("Digite outro numero\n\n");
				possui = 1;
				break;
			}
		}

		// se nao possui igual avance para a proxima posicao
		if (!possui)
			index++;

	}while(index < 10);

	printf("============\n");
	for (int i=0; i<10; i++)
		printf("%d\n", vet[i]);

    return 0;
}