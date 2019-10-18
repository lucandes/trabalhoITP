#include <stdio.h>
#include <string.h>

/*O código de Cesar é uma das mais simples e conhecidas técnicas de criptografia. É
um tipo de substituição na qual cada letra do texto é substituída por outra, que se
apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma
troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por
diante. Implemente um programa para cifrar e decifrar através do Código de Cesar.

a. Utilize somente caracteres sem espaço entre as palavras.

b. Na tabela ASCII, “a” = 97 e “A” = 65. Modificar o código para aceitar os 2 tipos
de caracteres (maiúsculos e minúsculos). */

int cript(char p[31], int desloc){
	// string temporaria
	char temp[31];
	int len = strlen(p);

	// enquanto o deslocamento foi maior que o tamanho do alfabeto
	while(desloc > 26){
		desloc -= 26;
	}

	// para cada letra na string
	for (int i=0; i<len-1; i++){

		// minuscula
		if (p[i] >= 97 && p[i] <= 122){

			// caso a letra + deslocamento ultrapasse a ultima do alfabeto
			if (p[i] + desloc > 122){
				temp[i] = p[i] + desloc - 26;
			}

			else {
				temp[i] = p[i] + desloc;
			}
		}

		// maiuscula
		else if (p[i] >= 65 && p[i] <= 90){

			// caso a letra + deslocamento ultrapasse a ultima do alfabeto
			if (p[i] + desloc > 90)
				temp[i] = p[i] + desloc - 26;

			else
				temp[i] = p[i] + desloc;
		}

		// caso o char nao esteja no alfabeto
		else {
			return 0;
		}
	}

	// p = temp
	for (int i=0; i<len; i++){
		p[i] = temp[i];
	}

	return 1;
}

int decript(char p[31], int desloc){
	// string temporaria
	char temp[31];
	int len = strlen(p);

	// enquanto o deslocamento foi maior que o tamanho do alfabeto
	while(desloc > 26){
		desloc -= 26;
	}

	// para cada letra na string
	for (int i=0; i<len-1; i++){

		// minuscula
		if (p[i] >= 97 && p[i] <= 122){

			// caso a letra + deslocamento ultrapasse a ultima do alfabeto
			if (p[i] - desloc < 97){
				temp[i] = p[i] - desloc + 26;
			}

			else {
				temp[i] = p[i] - desloc;
			}
		}

		// maiuscula
		else if (p[i] >= 65 && p[i] <= 90){

			// caso a letra + deslocamento ultrapasse a ultima do alfabeto
			if (p[i] - desloc < 65){
				temp[i] = p[i] - desloc + 26;
			}

			else {
				temp[i] = p[i] - desloc;
			}
		}

		// caso o char nao esteja no alfabeto
		else {
			return 0;
		}
	}

	// p = temp
	for (int i=0; i<len; i++){
		p[i] = temp[i];
	}

	return 1;
}

int main(){
	printf("Codigo de Cesar\n");
	int resposta;
	char back;

	do{
		printf("----------------------------\n");

		// o programa repetirá a pergunta enquanto a resposta for diferente de 1 e 0
		do {
			printf("[1] Cifrar\n[2] Decifrar\n\nOperacao: ");
			scanf("%d", &resposta);
		}while(resposta != 1 && resposta != 2);

		// cifrar
		if (resposta == 1){

			// recebendo informacoes do usuario
			int desloc;
			printf("Digite o deslocamento: ");
			scanf("%d", &desloc);

			char palavra[31];
			setbuf(stdin, NULL);
			printf("Digite a palavra: ");
			fgets(palavra, 31, stdin);

			int ret = cript(palavra, desloc);

			if (!ret){
				printf("A palavra inserida contem char invalido\n");
				return 0;
			}

			printf("\nCifrada: %s\n", palavra);
		}

		// decifrar
		else {

			// recebendo informacoes do usuario
			char palavra[31];
			setbuf(stdin, NULL);
			printf("Digite a palavra: ");
			fgets(palavra, 31, stdin);

			int desloc;
			printf("Digite o deslocamento: ");
			scanf("%d", &desloc);

			int ret = decript(palavra, desloc);

			if (!ret){
				printf("A palavra inserida contem char invalido\n");
				return 0;
			}

			printf("\nDecifrada: %s\n", palavra);
		}

		// pergunta ao usuario se deseja retornar ao inicio do programa
		do{
			printf("\nVoltar ao menu? (s/n): ");
			setbuf(stdin, NULL);
			scanf("%c", &back);
		}while(back != 's' && back != 'n');

	}while(back == 's');

	printf("\nSaindo...\n");
    return 0;
}