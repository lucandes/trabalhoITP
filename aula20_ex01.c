#include <stdio.h>
#include "pi.h"

 /*Faça  uma  função  e  um  programa  de  teste
para  o  calculo  do  volume  de  uma  esfera.
Sendo  que  o  raio  é  passado  por  parâmetro
e  o  valor  de  π  (pi)  dever  ser  uma  constante
lida  de  um  arquivo  header. */

float calc(float raio){
	float result;

	// volume = 3/4*pi*raio^3
	result = raio * raio * raio;
	printf("1. %f\n", result);
	result *= pi;
	printf("2. %f\n", result);
	result *= 1.3333333;
	printf("3. %f\n", result);

	return result;
}

int main(){
	float raio, resultado;

	printf("Insira o raio da esfera: ");
	scanf("%f", &raio);

	// funcao que calcula o volume
	resultado = calc(raio);

	printf("\nVolume da esfera: %.2f\n", resultado);

    return 0;
}