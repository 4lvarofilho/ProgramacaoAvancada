#include <stdio.h>

int main() {
    int valor, n;
    printf("Digite o valor a ser trocado: ");
    scanf("%d", &valor);

    printf("Digite a quantidade de tipos de notas disponiveis:");
    scanf("%d", &n);

    int notas[20];
    printf("Digite os valores das notas disponiveis (em ordem dedcrescente):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
    }

    printf("Notas usadas para o troco de %d:\n", valor);
    for (int i = 0; i < n; i++) {
        int qtd = valor / notas[i];
        if (qtd > 0) {
            printf("%d nota(s) de %d\n", qtd, notas[i]);
            valor -= qtd * notas[i];
        }
    }
    if (valor > 0) {
        printf("Nao foi possivel completar o troco com as notas disponiveis.\n");
    }

    return 0;
}