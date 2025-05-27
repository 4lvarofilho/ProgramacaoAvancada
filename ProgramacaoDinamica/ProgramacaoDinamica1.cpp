#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int mochilaPD(int capacidade, int peso[], int valor[], int n) {
    int i, w;
    int K[n+1][capacidade+1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= capacidade; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (peso[i-1] <= w)
                K[i][w] = max(valor[i-1] + K[i-1][w - peso[i-1]], K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }

    printf("Tabela de decisão (linhas = itens, colunas = capacidade):\n");
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= capacidade; w++) {
            printf("%3d ", K[i][w]);
        }
        printf("\n");
    }

    return K[n][capacidade];
}

int main() {
    int peso[] = {1, 2, 5, 6, 7, 9, 11};
    int valor[] = {1, 6, 18, 22, 28, 40, 60};
    int capacidade = 5;
    int n = sizeof(valor) / sizeof(valor[0]);

    int resultado = mochilaPD(capacidade, peso, valor, n);
    printf("\nValor máximo possível na mochila de %dkg: %d\n", capacidade, resultado);

    return 0;
}
