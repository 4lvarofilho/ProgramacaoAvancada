#include <stdio.h>
#include <math.h>

#define POTENCIA(x, y) (pow(x, y))
#define MAIOR(x, y) ((x) > (y) ? (x) : (y))
#define MENOR(x, y) ((x) < (y) ? (x) : (y))
#define MENSAGEM "Digite um número: "

int main() {
    int a, b;

    while (1) {
        printf(MENSAGEM);
        scanf("%d", &a);
        if (a == 0) break;

        printf(MENSAGEM);
        scanf("%d", &b);

        printf("Potência: %.0f\n", POTENCIA(a, b));
        printf("Maior: %d\n", MAIOR(a, b));
        printf("Menor: %d\n", MENOR(a, b));
    }

    return 0;
}
