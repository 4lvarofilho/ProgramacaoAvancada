#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    trocar(&x, &y);

    printf("Valores trocados: x = %d, y = %d\n", x, y);
    return 0;
}
