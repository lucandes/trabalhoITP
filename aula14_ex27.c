#include <stdio.h>
#include <string.h>

/*Escreva   um   programa   que   recebe   uma   string   S   e   inteiros   não-­negativos   I   e   J.   O  
programa  deve  imprimir  o  segmento  da  string  S  entre  [I..J].  Exemplo:  se  a  entrada  for  
“Rio  grande  do  Norte”  e  os  inteiros  4  e  9,  imprimir  “grande”.    
*/

int main(){
   
    char S[100]; //Declarando a string e seu tamanho
    int I, J; //declarando as variaveis que receberam os valores
    int x; //Contador para o laço for

    //Fazendo a leitura da string
    printf("Digite o texto: ");
    fgets(S, 100, stdin);

    //Fazendo a leitura das variáveis
    printf("Digite as variaveis 'I' e 'J' Positivas\n");
    scanf("%d %d", &I, &J);

    //Laço de repetição que pede pra rececer valores positivos enquanto não for satisfeito a condição
    while(I < 0 || J < 0){
        printf("Digite as variaveis 'I' e 'J' Positivas:\n");
        scanf("%d\n%d", &I, &J);
    }
    
    //Laço que imprime cada caracter da string entre I e J
    for(x=I; x<=J; x++){
        printf("%c", S[x]);
    }
   
    return 0;
}