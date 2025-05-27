#include <stdio.h>

int main() {
    int capacidade = 16;
    int pesos[] = {12, 8, 4, 2};
    int n = 4;
    int pesoTotal = 0;

    printf("Capacidade da mochila: %d\n", capacidade);
    printf("Objetos disponiveis:\n");
    for (int i = 0; i < n; i++) {
        printf("%d kg ", pesos[i]);
    }
    printf("\n");

    printf("Objetos escolhidos: ");
    for (int i = 0; i < n; i++) {
        if (pesos[i] <= capacidade) {
            printf("%d kg ", pesos[i]);
            pesoTotal += pesos[i];
            capacidade -= pesos[i];
        }
    }
    printf("\nPeso total na mochila: %d kg\n", pesoTotal);
    
    return 0;
}