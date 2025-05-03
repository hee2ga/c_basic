#include<stdio.h>

int main(void) {

	int a, b;
	char operation;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a,&operation,&b);

	if (operation == '+') {
		printf("%d + %d = %d\n", a, b, a + b);
	}
	else if (operation == '-') {
		printf("%d - %d = %d\n", a, b, a - b);
	}
	else if (operation == '*') {
		printf("%d * %d = %d\n", a, b, a * b);
	}
	else if (operation == '/') {
		printf("%d / %d = %d\n", a, b, a / b);
	}

	return 0;
}