#include<stdio.h>

int main(void) {
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';// 널문자를 출력하지않으면 쓰레기값 출력
	printf("%s\n", str);
	return 0;
}