#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SOCIOS 100

typedef struct {
    int matricula;
    char nome[81];
    int idade;
    char estadoCivil[10];
    char turno;
    float renda;
} Socio;

int lerSocios(Socio socios[], int max) {
    int n = 0;
    char resp;
    do {
        printf("Digite a matricula do socio: ");
        scanf("%d", &socios[n].matricula);
        getchar();

        printf("Digite o nome do socio: ");
        fgets(socios[n].nome, 81, stdin);
        socios[n].nome[strcspn(socios[n].nome, "\n")] = 0;

        printf("Digite a idade do socio: ");
        scanf("%d", &socios[n].idade);
        getchar();

        printf("Digite o estado civil do socio: ");
        fgets(socios[n].estadoCivil, 10, stdin);
        socios[n].estadoCivil[strcspn(socios[n].estadoCivil, "\n")] = 0;

        printf("Digite o turno do socio (M/T/N): ");
        scanf(" %c", &socios[n].turno);

        printf("Digite a renda do socio: ");
        scanf("%f", &socios[n].renda);

        n++;
        if (n >= max) {
            printf("Limite de socios atingido.\n");
            break;
        }

        printf("Deseja cadastrar outro socio? (s/n): ");
        getchar();
        resp = getchar();
        getchar();
    } while (resp == 's' || resp == 'S');
    return n;
}

int totalPorTurno(const Socio socios[], int n, char turno) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (socios[i].turno == turno) {
            total++;
        }
    }
    return total;
}

float mediaRendaCasados(const Socio socios[], int n) {
    float totalRenda = 0.0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(socios[i].estadoCivil, "Casado") == 0) {
            totalRenda += socios[i].renda;
            count++;
        }
    }
    return (count > 0) ? totalRenda / count : 0.0;
}

int main() {
    Socio socios[MAX_SOCIOS];
    int n = lerSocios(socios, MAX_SOCIOS);

    char turno;
    printf("Informe o turno para contar os socios (M/T/N): ");
    scanf(" %c", &turno);

    printf("Total de socios no turno %c: %d\n", turno, totalPorTurno(socios, n, turno));
    printf("Media de renda dos socios casados: %.2f\n", mediaRendaCasados(socios, n));
    return 0;
}