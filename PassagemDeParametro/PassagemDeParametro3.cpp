#include <stdio.h>

void tempoJogo(int h1, int m1, int h2, int m2, int *minutos, int *excede) {
    int inicio = h1 * 60 + m1;
    int fim = h2 * 60 + m2;

    *minutos = fim - inicio;
    *excede = (*minutos > 210) ? 1 : 0; // 3h30 = 210 min
}

int main() {
    int h1, m1, h2, m2, duracao, aviso;
    printf("Digite hora e minuto de início: ");
    scanf("%d %d", &h1, &m1);
    printf("Digite hora e minuto de fim: ");
    scanf("%d %d", &h2, &m2);

    tempoJogo(h1, m1, h2, m2, &duracao, &aviso);

    printf("Duração: %d minutos\n", duracao);
    printf("Mais que 3h30? %s\n", aviso ? "Sim" : "Não");
    return 0;
}
