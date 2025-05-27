#include <stdio.h>

int main() {
    int n, soma = 0, maior;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    printf("Digite os numeros:\n");
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (i == 0 || num > maior) {
            maior = num;
        }
        soma += num;
    }

    printf("Maior numero: %d\n", maior);
    printf("Soma dos numeros: %d\n", soma);
    return 0;
}