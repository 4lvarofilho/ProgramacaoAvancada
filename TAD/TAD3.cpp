#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
} DoisNumeros;

DoisNumeros* criarDoisNumeros(int a, int b) {
    DoisNumeros* numeros = (DoisNumeros*)malloc(sizeof(DoisNumeros));
    if (numeros != NULL) {
        numeros->a = a;
        numeros->b = b;
    }
    return numeros;
}

int somarNumeros(const DoisNumeros* numeros) {
    if (numeros != NULL) {
        return numeros->a + numeros->b;
    }
    return 0;
}

int multiplicarNumeros(const DoisNumeros* numeros) {
    if (numeros != NULL) {
        return numeros->a * numeros->b;
    }
    return 0;
}

int saoIguais(const DoisNumeros* numeros) {
    if (numeros != NULL) {
        return numeros->a == numeros->b;
    }
    return 0;
}

int main() {
    DoisNumeros* numeros = criarDoisNumeros(5, 10);
    if (numeros != NULL) {
        printf("Soma: %d\n", somarNumeros(numeros));
        printf("Multiplicacao: %d\n", multiplicarNumeros(numeros));
        printf("Sao iguais? %s\n", saoIguais(numeros) ? "Sim" : "Nao");
        free(numeros);
    } else {
        printf("Erro ao criar numeros.\n");
    }
    return 0;
}