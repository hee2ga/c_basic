#include<stdio.h>

int rec_func(int n);

int main(void) {

	int result;

	result=rec_func(10);

	printf("1���� 10������ ���� %d�Դϴ�.", result);

	return 0;
}

int rec_func(int n) {

	int result=0;

	if (n == 0) return result;

	result=n + rec_func(n - 1);

	return result;

}