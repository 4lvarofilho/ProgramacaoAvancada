#include <stdio.h>

void ordena(int v[]) {
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i+1; j < 3; j++) {
            if (v[i] > v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() {
    int v[3];
    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &v[0], &v[1], &v[2]);

    ordena(v);

    printf("Ordenado: A = %d, B = %d, C = %d\n", v[0], v[1], v[2]);
    return 0;
}
