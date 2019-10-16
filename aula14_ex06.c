#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[20];
	int *vetor_new = (int *) calloc(20, sizeof(int));

	// recebendo vetor do usuario
	for (int i=0; i<20;){
		printf("vetor[%d]: ", i);
		scanf("%d", &vetor[i++]);
	}

	// caso os dois vetores possuam numeros iguais
	int possuiIgual;
	// determina o indice onde sera colocado o numero
	int index = 0;

	// para cada int no vetor
	for (int i=0; i<20; i++){
		possuiIgual = 0;

		// para cada int no vetor_new
		for (int j=0; j<20; j++){
			// se ja existir o numero no vetor_new
			if (vetor[i] == vetor_new[j])
				possuiIgual = 1;
		}

		// caso o numero nao esteja no vetor_new
		if (!possuiIgual){
			// vetor_new recebera vetor[i]
			vetor_new[index] = vetor[i];
			index++;
		}
	}

	// tamanho do vetor_new sera o ultimo declarado + 1
	int len = index;

	//quebra de linha
	printf("\n");

	// impressao do resultado
	for (int i=0; i<len; printf("%d ", vetor_new[i++]));

	// quebra de linha final
	printf("\n");
	
	free(vetor_new);
	return 0;
}


/*
int main(){

    int vetor[5];
    int i, x;

    for(i=0; i<5; i++){
        scanf("%d", &V[i]);
    }

    if(V[i]==V[x]){
            for(i=0; i<5; i++){
                for(x=i+1; x<5; x++){
                    if(V[i]==V[x]){
                        printf("");
                        break;
                }

            }
        }
    }else{
        for(i=0; i<5; i++){
            printf("%d", V[i]);
        }
    }


return 0;
}*/