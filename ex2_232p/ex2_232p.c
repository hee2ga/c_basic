#include<stdio.h>

void sum(int end);

int main(void) {

	sum(10);
	sum(100);

	return 0;
}

void sum(int end) {

	int res=0;
	for (int i = 1;i <= end;i++) {
		res += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", end, res);

}