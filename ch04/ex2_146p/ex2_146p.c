#include<stdio.h>

int main(void) {
	int seats = 70;
	int audience = 65;
	
	double rate;

	rate = (double)audience / seats * 100;

	printf("입장률 : %.1lf%%", rate); // % 출력시 %%로 입력해야함

	return 0;
}