#include <stdio.h>

int Recursive(int n,int first) {
	
	if (n <= 1) {

		return(first);
		
	}
	first = first * 2 - 50;
	
	return Recursive(n-1,first);
}

int main() {
	
	int n = 6;

	int a = 100;

	int result;

	result = Recursive(n,a);

	printf("%dŽžŠÔ‚Í%d‰~\n", n, result);

	return 0;
}