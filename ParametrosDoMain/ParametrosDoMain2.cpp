#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 3)
  {
    printf("Uso: %s <distancia_km> <tempo_horas>\n", argv[0]);
    return 1;
  }

  float distancia = atof(argv[1]);
  float tempo = atof(argv[2]);

  if (tempo == 0)
  {
    printf("Tempo não pode ser zero.\n");
    return 1;
  }

  float velocidade = distancia / tempo;
  printf("Velocidade media: %.2f km/h\n", velocidade);
  return 0;
}
