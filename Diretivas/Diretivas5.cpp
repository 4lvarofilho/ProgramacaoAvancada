#include <stdio.h>
#define ESCOLHA 0

#if ESCOLHA == 0
    #define MEDIA(a, b) (((a)+(b))/2.0)
    #define APROVADO(media) ((media) >= 6.0 ? "Aprovado" : "Reprovado")
#elif ESCOLHA == 1
    int eh_primo(int n) {
        if (n < 2) return 0;
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) return 0;
        }
        return 1;
    }
#endif

int main() {
#if ESCOLHA == 0
    float nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    float m = MEDIA(nota1, nota2);
    printf("Média: %.2f\n", m);
    printf("%s\n", APROVADO(m));
#elif ESCOLHA == 1
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (eh_primo(n)) {
        printf("É primo.\n");
    } else {
        printf("Não é primo.\n");
    }
#else
    printf("Valor inválido. ESCOLHA deve ser 0 ou 1.\n");
#endif

    return 0;
}
