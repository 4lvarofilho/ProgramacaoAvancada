#include <stdio.h>
#define QUADRADO(x) ((x)*(x))
#define CUBO(x) ((x)*(x)*(x))

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Quadrado: %d\n", QUADRADO(n));
    printf("Cubo: %d\n", CUBO(n));

    return 0;
}
