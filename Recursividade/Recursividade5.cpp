#include <stdio.h>

int fatorial(int n) {
	if (n <= 1) {
		return 1;
	} else {
		return n * fatorial(n - 1);
	}
}

int main() {
	int n = 5;
	int result = fatorial(n);
	
	printf("%d! = %d", n, result);
	
	return 0;
}
