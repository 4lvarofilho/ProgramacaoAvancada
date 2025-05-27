#include <stdio.h>

int buscaBinaria(int vetor[], int inicio, int fim, int chave) {
    if (inicio > fim) return -1;
    
    int meio = (inicio + fim) / 2;
    
    printf("Início: %d | Meio: %d | Fim: %d | Valor do meio: %d\n", inicio, meio, fim, vetor[meio]);

    if (vetor[meio] == chave) return meio;
    else if (chave < vetor[meio]) return buscaBinaria(vetor, inicio, meio - 1, chave);
    else return buscaBinaria(vetor, meio + 1, fim, chave);
}

int main() {
    int vetor[10] = {3, 7, 10, 14, 18, 20, 25, 30, 35, 40}; // vetor ordenado
    int chave;
    printf("Digite o número a ser buscado: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(vetor, 0, 9, chave);

    if (resultado != -1)
        printf("Elemento %d encontrado na posição %d.\n", chave, resultado);
    else
        printf("Elemento %d não encontrado.\n", chave);

    return 0;
}
