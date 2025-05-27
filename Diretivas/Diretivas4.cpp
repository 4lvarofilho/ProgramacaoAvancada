#include <stdio.h>
#define AREA(base, altura) ((base)*(altura))

int main() {
    float base, altura;

    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Área do retângulo: %.2f\n", AREA(base, altura));

    return 0;
}
