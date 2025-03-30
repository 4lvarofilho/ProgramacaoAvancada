#include <stdio.h>

int potencia(int base, int exp) {
	if (exp == 0) {
		return 1;
	} else {
		return base * potencia(base, exp - 1);
	}
}

int main() {
	int base = 3;
	int exp = 3;
	
	int result = potencia(base, exp);
	
	printf("%d^%d = %d", base, exp, result);
}
