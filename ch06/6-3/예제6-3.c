#include<stdio.h>

int main(void) {
	int a = 1;

	do {
		a = a * 2;
	} while (a < 10);

	printf("a : %d", a);

	return 0;
}