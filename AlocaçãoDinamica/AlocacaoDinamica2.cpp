#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *vetor;
  int tamanho;

  printf("Digite o tamanho do vetor:\n");
  scanf("%d", &tamanho);
  vetor = (int *)malloc(tamanho * sizeof(int));
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
  free(vetor);

  return 0;
}