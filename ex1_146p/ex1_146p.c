#include<stdio.h>

int main(void) {
	int res;
	
	res = sizeof(short) > sizeof(long) ? 1 : 0;

	printf(res == 1 ? "short" : "long");

	return 0;
}