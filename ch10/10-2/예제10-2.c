#include<stdio.h>

int main(void) {
	int ary[3];
	int* pa = ary; // 포인터에 배열명 저장(포인터에 a주소 저장)
	int i;

	*pa = 10; // pa[0]=10
	*(pa + 1) = 20; // pa[1]=20
	pa[2] = pa[0] + pa[1]; // pa[2]=30

	for (i = 0;i < 3;i++) {
		printf("%5d", pa[i]);
	}
	return 0;
}