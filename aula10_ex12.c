#include <stdio.h>

/*  Escreva   um   programa   que   receba   como   entrada   o   valor   do   saque   realizado   pelo  
cliente  de  um  banco  e  retorne  quantas  notas  de  cada  valor  serão  necessárias  para  
atender  ao  saque  com  a  menor  quantidade  de  notas  possível.  Serão  utilizadas  notas  
de  100,  50,  20,  10,  e  5  reais.  
  
a.   Avisar   se   o   valor   informado   não   pode   ser   retirado   no   caixa   e   solicitar  
novamente  o  valor  (Exemplo:  R$102); 

b.   Não  exibir  resultado  “0”  para  um  tipo  de  nota  (Exemplo:  se  o  valor  for  R$120,  
informar  somente  “1  de  R$100”  e  “1  de  R$20”); */

int main(){
	// vetor com a quantidade de notas usadas em ordem decrescente (100,50,20,10,5)
	int notas[5] = {0,0,0,0,0};
	// vetor com o valor das notas, sera utilizado para impressao dos valores
	int valor[5] = {100,50,20,10,5};
	// a variavel saque eh iniciada com valor 1 para entrar no proximo loop
	int saque = 1;

	// enquanto o valor for invalido este loop sera repetido
	while (saque % 5 != 0){
		scanf("%d", &saque);

		if (saque % 5 != 0)
			printf("O valor inserido nao pode ser retirado do caixa\n");
	}

	// quando o saque for igual a 0 o loop parara
	while (saque != 0){
		// se o saque - (valor da nota) for positivo ou zero, o valor sera subtraido
		// da variavel saque e sera acrescentado 1 no contador da nota no vetor notas
		if (saque - 100 >= 0){
			saque -= 100;
			notas[0] += 1;
		}

		else if (saque - 50 >= 0){
			saque -= 50;
			notas[1] += 1;
		}

		else if (saque - 20 >= 0){
			saque -= 20;
			notas[2] += 1;
		}

		else if (saque - 10 >= 0){
			saque -= 10;
			notas[3] += 1;
		}

		else if (saque - 5 >= 0){
			saque -= 5;
			notas[4] += 1;
		}
	}

	// impressao de todas as notas que foram usadas pelo menos uma vez
	for (int i=0; i<5; i++){
		if (notas[i] != 0)
			printf("Notas de %d: %d\n", valor[i], notas[i]);
	}

    return 0;
}
