#include <stdio.h>

void atribquad(float lado, float *area, float *perimetro) {
    *area = lado * lado;
    *perimetro = 4 * lado;
}

int main() {
    float lado, area, perimetro;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    atribquad(lado, &area, &perimetro);

    printf("Área = %.2f\nPerímetro = %.2f\n", area, perimetro);
    return 0;
}
