#include<stdio.h>

int main(void) {
	printf("%d\n", 12);
	printf("%d\n", 014); // 8���� -> 10����
	printf("%d\n", 0xc); // 16���� -> 10����

	printf("%o\n", 12); // 10���� -> 8����
	printf("%x\n", 12); // 10���� -> 16����(�ҹ���)
	printf("%X\n", 12); // 10���� -> 16����(�빮��)

	return 0;
}