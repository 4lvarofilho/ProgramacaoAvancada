#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 4)
  {
    printf("Uso: %s <nome_empresa> <receita> <despesa>\n", argv[0]);
    return 1;
  }

  char *empresa = argv[1];
  float receita = atof(argv[2]);
  float despesa = atof(argv[3]);
  float lucro = receita - despesa;

  printf("Empresa %s teve lucro de %.2f\n", empresa, lucro);
  return 0;
}
