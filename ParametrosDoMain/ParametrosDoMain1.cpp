#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Informe ao menos um numero para somar.\n");
    return 1;
  }

  int soma = 0;
  for (int i = 1; i < argc; i++)
  {
    soma += atoi(argv[i]);
  }

  printf("Soma = %d\n", soma);
  return 0;
}
