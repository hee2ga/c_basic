#include<stdio.h>

int main(void) {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A'); // �빮�ڿ� 32 ���ϸ� �ҹ���!
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);
	return 0;
}