#include <stdio.h>

void maxpot(int x, int y, int max, int *produto, int *ultrapassa) {
    *produto = x * y;
    *ultrapassa = (*produto > max) ? 1 : 0;
}

int main() {
    int x, y, max, prod, passou;
    printf("Digite X, Y e MAX: ");
    scanf("%d %d %d", &x, &y, &max);

    maxpot(x, y, max, &prod, &passou);

    printf("Produto: %d\n", prod);
    printf("Ultrapassou MAX? %s\n", passou ? "Sim" : "Não");
    return 0;
}
