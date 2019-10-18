#include <stdio.h>
#include <string.h>

/*Crie uma função para somar dois vetores. Esta função deve receber dois vetores
e retornar a soma em um terceiro vetor.
• Caso o tamanho do primeiro e segundo vetor seja diferente então a função
retornará ZERO (0).
• Caso a função seja concluída com sucesso a mesma deve retornar o valor
UM (1).
• Utilize aritmética de ponteiros para manipulação do vetor.*/

int soma(int *A, int *B, int X, int Y, int *resultado){
    int i;
   	
   	// caso os tamanhos sejam diferentes
    if(X != Y)
        return 0;

    // caso sejam iguais
    else {
    	// leitura do vetor A
    	printf("\nInsira os membros do vetor A:\n");
        for(int i=0; i<X; i++){
        	scanf("%d", &A[i]);
    	}
   		
   		// leitura do vetor B
   		printf("\nInsira os membros do vetor B:\n");
    	for(int i=0; i<Y; i++){
        	scanf("%d", &B[i]);
    	}
    	
    	// a soma dos numeros de cada vetor sera inserida no vetor resultado
        for(i=0; i<X; i++){
            resultado [i] = A[i] + B[i];
        }
    }
    return 1;    
}

int main(){
	// declaracao das variaveis de tamanho
    int X, Y;
    // funcao recebera o retorno da funcao soma
    int funcao;
   	
   	// recebendo entradas do usuario
    printf("Digite o Tamanho do primeiro vetor\n");
    scanf("%d", &X);
    printf("Digite o Tamanho do segundo vetor\n");
    scanf("%d", &Y);
   	
   	// declarando vetores com os tamanhos inseridos pelo usuario
    int A[X], B[Y];
    int resultado[X];

    funcao = soma(A, B, X, Y, resultado);
   	
   	// caso o retorno da funcao seja diferente de 0
    if(funcao != 0){

    	// impressao do resultado
    	printf("\nVetor resultado:\n");
        for(int i=0; i<X; i++){
            printf("%d ", resultado[i]);
        }
    }

    // imprime o retorno da funcao
    printf("\n\nRetorno da funcao: %d\n", funcao);
   
    return 0;
}