#include <stdio.h>

void contagemRegressiva(int n) {
	if (n == 0) {
		return;
	} else {
		printf("%d", n);
		if (n > 1){
			printf(", ");
		}
	}
	contagemRegressiva(n - 1);
}

int main() {
	int num;
	
	printf("Digite o numero para a contagem regressiva: ");
	scanf("%d", &num);
	
	contagemRegressiva(num);
}
