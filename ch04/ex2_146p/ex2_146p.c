#include<stdio.h>

int main(void) {
	int seats = 70;
	int audience = 65;
	
	double rate;

	rate = (double)audience / seats * 100;

	printf("����� : %.1lf%%", rate); // % ��½� %%�� �Է��ؾ���

	return 0;
}