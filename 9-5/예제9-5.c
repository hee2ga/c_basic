#include<stdio.h>

int main(void) {

	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));// 8
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in)); // 8
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db)); // 8

	printf("char* �������� ũ�� : %d\n", sizeof(pc)); // 8
	printf("int* �������� ũ�� : %d\n", sizeof(pi)); // 8
	printf("double* �������� ũ�� : %d\n", sizeof(pd)); // 8

	printf("char* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc)); // 1
	printf("int* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi)); //4
	printf("double* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd)); //8

	return 0;
}