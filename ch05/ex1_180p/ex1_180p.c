#include<stdio.h>

int main(void) {

	int a, b;
	char operation;

	printf("��Ģ���� �Է�(����) : ");
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