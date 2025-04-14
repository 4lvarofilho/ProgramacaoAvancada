#include <stdio.h>
#define PAR(x) ((x) % 2 == 0)
#define MSG_PAR "O número é par."
#define MSG_IMPAR "O número é ímpar."

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (PAR(n)) {
        printf(MSG_PAR "\n");
    } else {
        printf(MSG_IMPAR "\n");
    }

    return 0;
}
