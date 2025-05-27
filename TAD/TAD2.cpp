#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[51];
    int quantidade;
    float preco;
} Produto;

Produto* criarProduto(int codigo, const char* nome, int quantidade, float preco) {
    Produto* p = (Produto*)malloc(sizeof(Produto));
    if (p != NULL) {
        p->codigo = codigo;
        strncpy(p->nome, nome, 50);
        p->nome[50] = '\0';
        p->quantidade = quantidade;
        p->preco = preco;
    }
    return p;
}

int main() {
    Produto* p = criarProduto(1, "Produto A", 10, 19.99);
    if (p != NULL) {
        printf("Codigo: %d\n", p->codigo);
        printf("Nome: %s\n", p->nome);
        printf("Quantidade: %d\n", p->quantidade);
        printf("Preco: %.2f\n", p->preco);
        free(p);
    } else {
        printf("Erro ao criar produto.\n");
    }
    return 0;
}