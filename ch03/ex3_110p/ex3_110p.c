#include<stdio.h>

int main(void) {
	char ch;
	printf("문자 입력 : ");
	scanf("%c", &ch);

	printf("%c문자의 아스키 코드의 값은 %d 입니다.", ch, ch);
	return 0;
}