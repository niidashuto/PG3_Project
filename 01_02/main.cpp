#include <stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return (1);
	}
	return (n * Recursive(n - 1));
}

int main() {

	int n = 10;
	int result;

	result = Recursive(n);
	printf("%d‚ÌŠKæ = %d\n", n, result);

	return (0);
}