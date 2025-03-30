#include <stdio.h>

int mult_iterativa (int a, int b) {
	int resultado = 0;
	
	for (int i = 0; i < b; i++) {
		resultado += a;
	}
	return resultado;
}

int mult_recursiva (int a, int b) {
	if (b == 0) {
		return 0;
	} else {
		return a + mult_recursiva(a, b - 1);
	}
}

int main() {
	int num1 = 4;
	int num2 = 5;
	
	int result_iterativo = mult_iterativa(num1, num2);
	int result_recursivo = mult_recursiva(num1, num2);
	
	printf("Resultado da multiplicacao iterativa: %d\n", result_iterativo);
	printf("Resultado da multiplicacao recursiva: %d\n", result_recursivo);
}	
