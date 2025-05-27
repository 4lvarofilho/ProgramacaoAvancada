#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0) return 1;
    int temp = potencia(base, expoente / 2);
    if (expoente % 2 == 0) {
        return temp * temp;
    } else {
        return temp * temp * base;
    }
}

int main() {
    int base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    int resultado = potencia(base, expoente);
    printf("%d elevado a %d = %d\n", base, expoente, resultado);
    return 0;
}