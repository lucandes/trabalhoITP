#include <stdio.h>

/* Faça  um  algoritmo  que  receba  um  número  
inteiro  positivo  n  e  calcule  o  seu  fatorial,  
n!.  O  fatorial  de  um  número  é  calculado  
pela  multiplicação  desse  número  por  todos  
os  seus  antecessores  até  chegar  ao  número  1
(o  zero  (0)  é  excluído). */

int main(){
	// n sera o inteiro recebido e m o fatorial
	int n, m;
	// recebendo inteiro do usuario
	scanf("%d", &n);
	// a variavel m recebe o valor de n
	m = n;

	// sera repetido ate que n = 1
	while (n != 1)
		m *= (--n);

	// impressao do resultado
	printf("%d\n", m);


    return 0;
}