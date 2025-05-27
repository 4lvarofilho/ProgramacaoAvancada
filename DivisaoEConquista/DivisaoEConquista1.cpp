#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0) return 0;
    if (b == 1) return a;
    int metade = multiplicar(a, b / 2);
    if (b % 2 == 0) {
        return metade + metade;
    } else {
        return metade + metade + a;
    }
}

int main() {
    int a, b;
    printf("Digite dois numeros para multiplicar: ");
    scanf("%d %d", &a, &b);
    int resultado = multiplicar(a, b);
    printf("Resultado: %d\n", resultado);
    return 0;
}
