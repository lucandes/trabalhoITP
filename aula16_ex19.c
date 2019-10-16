#include <stdio.h>

/* Crie  uma  função  que  receba  como  
parâmetro  um  valor  inteiro  e  gere  
como  saída  n  linhas   com   um   
determinado   símbolo   também   passado 
por   parâmetro. */

void func(int n, char c){

	// a variavel linha sera resposavel por contar as linhas
	for (int linha=1; linha<=n; linha++){
		// imp conta os caracteres impressos em determinada linha
		for (int imp=0; imp<linha; imp++){
			printf("%c ", c);
		}
		// a cada fim de linha havera uma quebra de linha
		printf("\n");
	}
}

int main(){
	// recebendo input do usuario
	int n;
	char c;
	scanf("%d %c", &n, &c);

	// funcao que imprime na tela
	func(n, c);

    return 0;
}