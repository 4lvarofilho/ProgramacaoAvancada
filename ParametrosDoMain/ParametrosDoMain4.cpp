#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 4)
  {
    printf("Uso: %s <nome> <nota1> <nota2>\n", argv[0]);
    return 1;
  }

  char *nome = argv[1];
  float nota1 = atof(argv[2]);
  float nota2 = atof(argv[3]);
  float media = (nota1 + nota2) / 2;

  printf("%s tem media %.2f : %s\n", nome, media, media >= 5 ? "Aprovado" : "Reprovado");
  return 0;
}
