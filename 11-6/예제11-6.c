#include<stdio.h>

void my_gets(char* str, int size);

int main(void) {

	char str[7]; // ���� 6�� + �ι��� 1��

	my_gets(str, sizeof(str)); // sizeof(str) == 7
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char* str, int size) {
	int ch;
	int i = 0;

	ch = getchar();
	// enter�������ʰ� �迭�� ũ�Ⱑ ���� �ʵ���(������ ���� �ι��ڶ� -1)
	while ((ch != '\n') && (i < size - 1)) {

		str[i] = ch;
		i++;
		ch = getchar();

	}

	str[i] = '\0';
}