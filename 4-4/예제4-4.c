#include<stdio.h>

int main(void) {
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; //18
	post = (b++) * 3; //15

	printf("���� ���� �� �ʱⰪ a=%d, b=%d\n", a, b);
	printf("������ : (++a) * 3 = %d, ������ : (b++) * 3 = %d", pre, post);
	return 0;
}