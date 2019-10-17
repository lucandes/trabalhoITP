#include <stdio.h>
/*   Escreva  um  programa  que  leia  um  numero  
inteiro  positivo  N  e  criei  uma  função  que  
imprima   N   linhas   do   chamado   Triangulo   
de   Floyd. */

void Floyd(int N);

int main(){

    int N;

    scanf("%d", &N);
    Floyd(N);

return 0;
}

void Floyd(int N){

    int linha;
    int c = 0; //incrementa os valores

    // para cada linha em N
    for(linha=1; linha<=N; linha++){
        // para cada numero impresso
       for(int j=1; j<=linha; j++){
            c++;
            printf("%d\t",c);
        }
       printf("\n");
    }

}