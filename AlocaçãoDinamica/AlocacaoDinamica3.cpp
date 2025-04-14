#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *matriz;
  int linhas, colunas;

  printf("Digite o numero de linhas da matriz:\n");
  scanf("%d", &linhas);
  printf("Digite o numero de colunas da matriz:\n");
  scanf("%d", &colunas);

  matriz = (int *)malloc(linhas * colunas * sizeof(int));

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      printf("Digite o valor da matriz[%d][%d]:\n", i, j);
      scanf("%d", &matriz[i * colunas + j]);
    }
  }
  
  printf("Os valores da matriz sao:\n");
  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      printf("%d ", matriz[i * colunas + j]);
    }
    printf("\n");
  }
  free(matriz);
}