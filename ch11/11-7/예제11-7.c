#include<stdio.h>

int main(void) {

	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num); // �Է��� �й��� ���๮��(enter) ���ۿ� ����

	getchar(); // ���ۿ� �����ִ� ���๮�� ����

	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}