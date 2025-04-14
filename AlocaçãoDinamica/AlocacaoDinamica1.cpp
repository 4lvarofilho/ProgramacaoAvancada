#include <stdio.h>
#include <stdlib.h>

typedef struct Cliente
{
  char nome[50];
  char cidade[50];
  char estado[50];
} Cliente;

int main()
{
  Cliente *cliente = (Cliente *)malloc(sizeof(Cliente));

  printf("Digite o nome do cliente:\n");
  fgets(cliente->nome, sizeof(cliente->nome), stdin);
  printf("Digite a cidade do cliente:\n");
  fgets(cliente->cidade, sizeof(cliente->cidade), stdin);
  printf("Digite o estado do cliente:\n");
  fgets(cliente->estado, sizeof(cliente->estado), stdin);

  printf("Nome: %s", cliente->nome);
  printf("Cidade: %s", cliente->cidade);
  printf("Estado: %s", cliente->estado);

  free(cliente);

  return 0;
}
