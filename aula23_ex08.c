#include <stdio.h>
#include <string.h>

/*Faça   um   programa   que   leia   os   
dados   de   10   alunos   (Nome,   matricula,   
Média   Final),  armazenando   em   um   vetor.
Uma   vez   lidos   os   dados,   divida   
estes   dados   em   2   novos  vetores,  o  
vetor  dos  aprovados  e  o  vetor  dos  
reprovados,  considerando  a  média  mínima  
para  a  aprovação  como  sendo  5.0.  Exibir
na  tela  os  dados  do  vetor  de  aprovados,
seguido  dos  dados  do  vetor  de  reprovados. */

typedef struct {
	char nome[21];
	int matricula;
	float media;
}tipoAluno;

int main(){
	// variavel que determina o tamanho do vetor
	const int len = 10;

	// vetor com dados dos alunos
	tipoAluno aluno[len];

	// leitura dos dados dos alunos
	for (int i=0; i<len; i++){
		setbuf(stdin, NULL);
		printf("\nNome: ");
		fgets(aluno[i].nome, 21, stdin);

		printf("Matricula: ");
		scanf("%d", &aluno[i].matricula);

		printf("Media final: ");
		scanf("%f", &aluno[i].media);
	}

	// criacao dos vetores de aprovados e reprovados
	tipoAluno aprovados[len];
	int apv = 0;

	tipoAluno reprovados[len];
	int rpv = 0;

	// checando a situacao dos alunos e adicionando
	// ao seu determinado vetor
	for (int i=0; i<len; i++){
		if (aluno[i].media >= 5){
			//copiando dados do aluno para o vetor aprovados
			strcpy(aprovados[apv].nome, aluno[i].nome);
			aprovados[apv].matricula = aluno[i].matricula;
			aprovados[apv].media = aluno[i].media;
			apv++;
		}
		else {
			//copiando dados do aluno para o vetor reprovados
			strcpy(reprovados[rpv].nome, aluno[i].nome);
			reprovados[rpv].matricula = aluno[i].matricula;
			reprovados[rpv].media = aluno[i].media;
			rpv++;
		}
	}

	// impressao do vetor de aprovados
	printf("\n==== Aprovados =====\n");
	for (int i=0; i<apv; i++){
		printf("Nome: %.*s\n", (int) strlen(aprovados[i].nome)-1, aprovados[i].nome);
		printf("Matricula: %d\n", aprovados[i].matricula);
		printf("Media final: %.2f\n\n", aprovados[i].media);
	}

	// impressao do vetor de reprovados
	printf("==== Reprovados ====\n");
	for (int i=0; i<rpv; i++){
		printf("Nome: %.*s\n", (int) strlen(reprovados[i].nome)-1, reprovados[i].nome);
		printf("Matricula: %d\n", reprovados[i].matricula);
		printf("Media final: %.2f\n\n", reprovados[i].media);
	}



    return 0;
}