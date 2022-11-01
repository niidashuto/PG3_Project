#include<stdio.h>
template<typename Type>

Type Min(Type num1, Type num2)
{
	if (num1 <= num2) {
		return static_cast<Type>(num1);
	}
	else {
		return static_cast<Type>(num2);
	}
}

template<>
char Min(char num1, char num2) {

	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");

	return 0;
}

int main() {

	int num1 = 3;
	int num2 = 5;
	printf("%d\n", Min<int>(num1, num2));

	float num3 = 1.4f;
	float num4 = 5.2f;
	printf("%f\n", Min<float>(num3, num4));

	double num5 = 1.5;
	double num6 = 2.5;
	printf("%f\n", Min<double>(num5, num6));

	char num7 = 'x';
	char num8 = 'z';
	printf("%c\n", Min<char>(num7, num8));

	

	return 0;
}