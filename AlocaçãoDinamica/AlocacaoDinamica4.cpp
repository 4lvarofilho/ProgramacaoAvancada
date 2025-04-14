#include <stdio.h>
#include <stdlib.h>

void alocacaoVetor(int **vetor, int tamanho)
{
  *vetor = (int *)malloc(tamanho * sizeof(int));
  if (*vetor == NULL)
  {
    printf("Erro ao alocar memoria.\n");
    exit(1);
  }
}

void liberarVetor(int **vetor)
{
  free(*vetor);
  *vetor = NULL;
}

int main()
{
  int *vetor;
  int tamanho;

  printf("Digite o tamanho do vetor:\n");
  scanf("%d", &tamanho);
  alocacaoVetor(&vetor, tamanho);

  for (int i = 0; i < tamanho; i++)
  {
    printf("Digite o valor do vetor[%d]:\n", i);
    scanf("%d", &vetor[i]);
  }
  
  printf("Os valores do vetor sao:\n");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vetor[i]);
  }

  liberarVetor(&vetor);

  return 0;
}