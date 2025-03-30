#include <stdio.h>

int main(){
	
	int *a = 0, *b = 0;
	int num1 = 0, num2 = 0;
	a = &num1;
	b = &num2;
	int *resultado;
	int num3;
	resultado = &num3;
	
	printf("Digite o valor de 'a' e 'b':\n");
	scanf("%d %d", &num1, &num2);
	
	num3 = num1 + num2;
	
	printf("Valor de a: %d\nEndereco de a: %p\n", *a, &a);
	printf("Valor de b: %d\nEndereco de b: %p\n", *b, &b);
	printf("Valor de resultado: %d\nEndereco de resultado: %p\n", *resultado, &resultado);
	printf("Valor de num1: %d\nEndereco de num1: %p\n", num1, &num1);
	printf("Valor de num2: %d\nEndereco de num2: %p\n", num2, &num2);
	printf("Valor de num3: %d\nEndereco de num3: %p\n", num3, &num3);
}
