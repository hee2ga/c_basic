#include<stdio.h>

void my_gets(char* str, int size);

int main(void) {

	char str[7]; // 문자 6개 + 널문자 1개

	my_gets(str, sizeof(str)); // sizeof(str) == 7
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char* str, int size) {
	int ch;
	int i = 0;

	ch = getchar();
	// enter눌리지않고 배열의 크기가 넘지 않도록(마지막 문자 널문자라서 -1)
	while ((ch != '\n') && (i < size - 1)) {

		str[i] = ch;
		i++;
		ch = getchar();

	}

	str[i] = '\0';
}