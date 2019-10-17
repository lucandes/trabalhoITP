#include <stdio.h>

/*
Leia  dois  vetores  de  inteiros  x  e  y,  cada  um  com  5  elementos  (assuma  que  o  usuário  
não  informa  elementos  repetidos  dentro  do  mesmo  vetor,  ou  seja,  dentro  de  x  não  
podem  ter  valores  repetidos  e  dentro  de  y  também  não).  Calcule  e  mostre  os  vetores  
resultantes  em  cada  caso  abaixo:  
a.   Soma  entre  x  e  y:  soma  de  cada  elemento  de  x  com  o  elemento  da  mesma  
posição  em  y.  
b.   Produto  entre  x  e  y:  multiplicação  de  cada  elemento  de  x  como  elemento  da  
mesma  posição  em  y.  
c.   Diferença  entre  x  e  y:  todos  os  elementos  de  x  que  não  existam  em  y.  
d.   Interseção  entre  x  e  y:  apenas  os  elementos  que  aparecem  nos  dois  vetores.  
e.   União  entre  x  e  y:  todos  os  elementos  de  x,  e  todos  os  elementos  de  y  que  
não  estão  em  x.
*/

int main(){

    int X[5], Y[5]; // Declarando O vetor X e Y;
    int i, j, U = 0; // Contadores Usados nos laços d verificação
    int Soma[5], Produto[5], Direrenca[5], intersecao[5], Uniao[10]; // Declarando vetores e seus respectivos tamanhos

    //lendo o vetor X
    printf("Preencha o vetor X:\n");
    for(i=0; i<5; i++){
        scanf("%d", &X[i]);
    }

    //lendo o vetor Y
    printf("Preencha o vetor Y:\n");
    for(i=0; i<5; i++){
        scanf("%d", &Y[i]);
    }

    //Somando cada elemento do Vetor X com o Vetor Y sequencialmente
    printf("Soma\n");
    for(i=0; i<5; i++){
        Soma[i] = X[i] + Y[i];
    }

    for(i=0; i<5; i++){
        printf("%d ", Soma[i]);
    }
    //Multiplicando cada elemento do Vetor X pelo elemento Y sequencialmente
    printf("\n");

    printf("Produto\n");
    for(i=0; i<5; i++){
        Produto[i] = X[i] * Y[i];
    }
    for(i=0; i<5; i++){
        printf("%d ", Produto[i]);
    }

    ////Subtraindo cada elemento do Vetor X com o Vetor Y sequencialmente
    printf("\n");

    printf("Direrenca\n");
    for(i=0; i<5; i++){
        Direrenca[i] = X[i] - Y[i];
    }

    for(i=0; i<5; i++){
        printf("%d ", Direrenca[i]);
    }

    //Verificando Quais elementos iguais entre os Vetores X e y
    printf("\nIntercesao:\n");

    for(i=0; i<5; i++){ //Este laço percorre cada elemento do vetor X
        for(j=0; j<5; j++){//Este laço percorre cada elemento do vetor Y
            if(X[i] == Y[j]){ // Nesesta condição comparamos se há igualdade nos elementos dos vetores
                printf("%d ", X[i]); // imprime apenas o(os) elemento(s) que se repete(m)
            }
        }
   
    }

    // Atribui os vetores X e Y em apenas um vetor (União), sem os valores repetidos
    printf("\nUniao\n");

    //Atribiu Os valores do vetor X para o vetor Uniao
    for(i=0; i<5; i++){
        Uniao[i] = X[i];
        U++;
    }
   
    int iguais; // Variável pra receber o valor se for igual;


    //laço verifica se há valores iguais entre os vetores Y e Uniao
    for(i=0; i<5; i++){
        iguais = 0;

        for(j=0; j<5; j++){
        	// caso exista um valor igual
            if(Y[i] == Uniao[j]){
               iguais = 1;
               break;
            }
        }

        // se não houver valores iguais ele atribui ao vetor uniao
        // e é incrementado mais um a variavel U;
        if(iguais == 0){
            Uniao[U] = Y[i];
            U++;
        }
    }

    // Imprime o vetor Uniao
    for(i=0; i<U; i++){
        printf("%d ", Uniao[i]);
    }

    //quebra de linha final
    printf("\n");
   
return 0;

}