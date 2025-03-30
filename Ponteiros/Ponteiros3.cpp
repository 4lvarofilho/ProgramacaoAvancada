#include <stdio.h>

typedef struct {
	int matricula;
	char nome[100];
	float nota1;
	float nota2;
	float media;
} Aluno;

int main() {
	Aluno aluno, *p;
	
	p = &aluno;
	
	printf("Digite a matricula do aluno:\n");
	scanf("%d", &aluno.matricula);
	getchar();
	printf("Digite o nome do aluno:\n");
	fgets(aluno.nome, 100, stdin);
	printf("Digite as notas do aluno:\n");
	scanf("%f %f", &aluno.nota1, &aluno.nota2);
	aluno.media = (aluno.nota1 + aluno.nota2) / 2;
	
	printf("Matricula do aluno: %d\n", p->matricula);
	printf("Nome do aluno: %s\n", p->nome);
	printf("Media do aluno: %.1f\n", p->media);
	
	if (p->media > 7){
		printf("Situacao: Aprovado\n");
	} else {
		printf("Situacao: Reprovado\n");
	}
}
