#include<stdio.h>

/*Faca um programa que leia um numero inteiro positivo par N e imprima todos os
números pares de 0 até N em, primeiro em ordem crescente e depois em ordem
decrescente. O programa deve repetir a pergunta do número, caso ele não seja par,
até que seja informado corretamente. Terminar a execução quando o valor informado
for 0.*/

int main(){

    int N; //Váriavel que será informada pelo usuario
    int i = 0; // contador usado nos laços for

    //Recebendo o valor de N pelo usuario
    printf("Digite um numero PAR!\nOu 0 para encerrar o programa. \n");
    scanf("%d", &N);

    /*Se for informado 0 para N será executado exit(0)
    para encerra a execução do programa*/
    if(N == 0){
        exit(0);
    }

    while(N%2!=0){// laço de repetição que pede pra ser informado um valor par
        printf("Digite um numero PAR!\nOu 0 para encerrar o programa. \n");
        scanf("%d", &N);
        /*Se for informado 0 para N será executado exit(0)
        para encerra a execução do programa*/
        if(N == 0){
        exit(0);
        }
    }
        if(N%2==0){ //Se o número for par executa os laços for abaixo
            for(i=0; i<=N; i++){ // laço utilizado para exibir umas numeros pares em ordem crecente
        if(i%2 == 0){
            printf(" %d ", i);
        }
        }

        printf("\n");

        for(i=N; i>=0; i--){ //laço utilizado para exibir umas numeros pares em ordem decrecente
            if(i%2 == 0){
                printf(" %d ", i);
            }
        }
    }

    return 0;
}
