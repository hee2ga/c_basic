#include<stdio.h>

int main(void) {
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a); // 시작주소값 출력
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);
	return 0;
}