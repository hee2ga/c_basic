#include<stdio.h>

int main(void) {
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa); // pa = 088
	printf("pb : %u\n", pb); // pb = 100

	pa++; 
	printf("pb-pa : %u\n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa); // 20
	else  printf("%d\n", *pb);

	return 0;
}