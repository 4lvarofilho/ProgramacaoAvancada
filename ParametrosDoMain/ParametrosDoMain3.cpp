#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Uso: %s <base> <altura>\n", argv[0]);
		return 1;
	}

	float base = atof(argv[1]);
	float altura = atof(argv[2]);
	float area = (base * altura) / 2;

	printf("Area do triangulo: %.2f\n", area);
	return 0;
}
