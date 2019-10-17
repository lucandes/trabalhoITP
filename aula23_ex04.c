#include <stdio.h>
#include <string.h>

/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matricula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a. Permita ao usuário entrar com os dados de 5 alunos.
b. Encontre o aluno com maior nota da primeira prova.
c. Encontre o aluno com maior média geral.
d. Encontre o aluno com menor média geral
e. Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6
para aprovação.*/

typedef struct
{
	float n1, n2, n3, media;
	int sit;
}tipoNota;

typedef struct
{
	char nome[51];
	int matricula;
	tipoNota notas;
}tipoAluno;

int main(){
	// tamanho da lista de alunos
	const int len = 5;

	// declarando vetor de estruturas
	tipoAluno aluno[len];

	// leitura de dados do usuario
	for (int i=0; i<len; i++){
		printf("=== Aluno %d ===\n", i+1);
		printf("Nome: ");
		setbuf(stdin, NULL);
		fgets(aluno[i].nome, 51, stdin);

		printf("Matricula: ");
		scanf("%d", &aluno[i].matricula);

		printf("Nota 1: ");
		scanf("%f", &aluno[i].notas.n1);

		printf("Nota 2: ");
		scanf("%f", &aluno[i].notas.n2);

		printf("Nota 3: ");
		scanf("%f", &aluno[i].notas.n3);

		tipoNota *esteAluno = &aluno[i].notas;
		esteAluno->media = (esteAluno->n1 + esteAluno->n2 + esteAluno->n3) / 3;

		if (esteAluno->media >= 6)
			esteAluno->sit = 1;
		else
			esteAluno->sit = 0;
	}

	// aluno com maior nota
	float maiorNota = 0;
	char nomeMaior[51];

	// para cada aluno no vetor
	for (int i=0; i<len; i++){
		// se a nota do aluno for maior que a dos anteriores
		if (aluno[i].notas.n1 > maiorNota){
			maiorNota = aluno[i].notas.n1;
			strcpy(nomeMaior, aluno[i].nome);
		}
	}

	// maior media
	float maiorMedia = 0;
	char nomeMaiorMedia[51];

	// para cada aluno no vetor
	for (int i=0; i<len; i++){
		// se a media do aluno for maior que a dos anteriores
		if (aluno[i].notas.media > maiorMedia){
			maiorMedia = aluno[i].notas.media;
			strcpy(nomeMaiorMedia, aluno[i].nome);
		}
	}

	// menor media
	float menorMedia = 10; // inicializada com o valor maximo
	char nomeMenorMedia[51];

	// para cada aluno no vetor
	for (int i=0; i<len; i++){
		// se a media do aluno for menor que a dos anteriores
		if (aluno[i].notas.media < menorMedia){
			menorMedia = aluno[i].notas.media;
			strcpy(nomeMenorMedia, aluno[i].nome);
		}
	}

	// impressao de resultados
	printf("\nAluno com maior primeira nota: %.*s, %.2f\n", (int) strlen(nomeMaior)-1, nomeMaior, maiorNota);
	printf("Aluno com maior media geral: %.*s, %.2f\n", (int) strlen(nomeMaiorMedia)-1, nomeMaiorMedia, maiorMedia);
	printf("Aluno com menor media geral: %.*s, %.2f\n", (int) strlen(nomeMenorMedia)-1, nomeMenorMedia, menorMedia);

	printf("\n=== situacao ===\n");
	// para cada aluno no vetor
	for (int i=0; i<len; i++){
		printf("%.*s - ", (int) strlen(aluno[i].nome)-1, aluno[i].nome);
		aluno[i].notas.sit == 1 ? printf("Aprovado\n") : printf("Reprovado\n");
	}


    return 0;
}
