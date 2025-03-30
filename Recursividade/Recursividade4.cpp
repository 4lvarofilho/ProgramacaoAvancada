#include <stdio.h>

void contagemProgressiva(int n, int i) {
	if (i > n) {
		return;
	} else {
		printf("%d", i);
		if (n > i){
			printf(", ");
		}
	}
	contagemProgressiva(n, i + 1);
}

int main() {
	int num;
	
	printf("Digite o numero para a contagem progressiva: ");
	scanf("%d", &num);
	
	contagemProgressiva(num, 1);
}
