#include <stdio.h>

/*Escreva  um  programa  que  leia  um  numero  
inteiro  positivo  N  e  em  seguida  imprima  N  
linhas  do  chamado  Triangulo  de  Floyd.  
Dica:  utilizar  laços  de  repetição  aninhados.
*/

int main(){
	// variavel que recebe o inteiro do usuario
	int n;
	printf("Insira um inteiro: ");
	scanf("%d", &n);

	// variavel que representa os numeros impressos
	int nums = 1;

	// linha representa o espaco onde serao impressos
	for (int linha=1; linha<=n; linha++){

		// imp representa os numeros que foram impressos
		// ao reiniciar o loop imp volta a ser 0
		for (int imp=0; imp<linha; printf("%d ", nums++))
			// cada vez que um numero for impresso imp += 1 
			imp++;

		// uma nova linha sera criada ao fim do loop
		printf("\n");
	}

    return 0;
}