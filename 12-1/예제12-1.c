#include<stdio.h>

int main(void) {

	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple"); // %p 16������ �ּ� ���
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);

	printf("ù ��° ���� :%c\n", *"apple"); // == "apple"[0]
	printf("�� ��° ���� :%c\n", *("apple"+1)); // "apple"[1]

	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

	return 0;
}