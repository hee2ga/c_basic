#include<stdio.h>

int main(void) {

	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a�� �� : %d\n", *pa); // 10

	pa = &b;
	printf("���� b�� �� : %d\n", *pa); // 20

	pa = &a;
	a = 20;
	printf("���� a�� �� : %d\n", *pa); // 20

	return 0;
}