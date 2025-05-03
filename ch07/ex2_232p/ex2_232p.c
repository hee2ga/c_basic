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
	printf("1부터 %d까지의 합은 %d입니다.\n", end, res);

}