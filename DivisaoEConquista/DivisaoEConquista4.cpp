#include <stdio.h>

void Quick(int vetor[10], int inicio, int fim);

int main(){
    int vetor[10] = {7, 9, 4, 3, 6, 1, 18, 2, 10, 5};
    int i;

    printf("Vetor desordenado:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    Quick(vetor, 0, 9);

    printf("Vetor ordenado:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

void Quick(int vetor[10], int inicio, int fim){
    int pivo, aux, i, j, meio;

    i = inicio;
    j = fim;
    meio = (inicio + fim) / 2;
    pivo = vetor[meio];

    do {
        while (vetor[i] < pivo) i++;
        while (vetor[j] > pivo) j--;
        
        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    } while(i <= j);

    if(inicio < j) Quick(vetor, inicio, j);
    if(i < fim) Quick(vetor, i, fim);
}
