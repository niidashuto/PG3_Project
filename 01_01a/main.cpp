#include <stdio.h>

template<typename Type>
Type add(Type a, Type b) {
	return static_cast<Type>(a + b);
}

int main() {

	printf("%d\n", add<int>(114, 514));
	printf("%f\n", add<float>(11.4f, 51.4f));

	return 0;
}