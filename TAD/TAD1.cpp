#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

void criarCadastro(Aluno *a) {
    printf("Digite o nome do aluno: ");
    fgets(a->nome, 81, stdin);
    a->nome[strcspn(a->nome, "\n")] = 0;

    printf("Digite a matricula do aluno: ");
    fgets(a->matricula, 8, stdin);
    a->matricula[strcspn(a->matricula, "\n")] = 0;

    printf("Digite a turma do aluno: ");
    scanf(" %c", &a->turma);

    printf("Digite a nota P1: ");
    scanf("%f", &a->p1);

    printf("Digite a nota P2: ");
    scanf("%f", &a->p2);

    printf("Digite a nota P3: ");
    scanf("%f", &a->p3);

    while (getchar() != '\n');
}

void imprimirMedia(const Aluno *a) {
    float media = (a->p1 + a->p2 + a->p3) / 3.0;
    printf("Nome: %s\n", a->nome);
    printf("Media: %.2f\n", media);
}

void imprimirCadastro(const Aluno *a) {
    printf("Nome: %s\n", a->nome);
    printf("Matricula: %s\n", a->matricula);
    printf("Turma: %c\n", a->turma);
    printf("P1: %.2f\n", a->p1);
    printf("P2: %.2f\n", a->p2);
    printf("P3: %.2f\n", a->p3);
}

int main() {
    Aluno a;
    criarCadastro(&a);
    imprimirCadastro(&a);
    imprimirMedia(&a);
    return 0;
}