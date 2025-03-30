#include <stdio.h>

int main() {
	int x, *px;
	px = &x;
	
	printf("Digite o valor de x:\n");
	scanf("%d", px);
	
	float resultado = *px / 5;
	
	printf("Resultado de x / 5 = %.2f", resultado);
}
