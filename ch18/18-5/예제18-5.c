#include<stdio.h>

int main(void) {
	int ch;

	while (1) {
		ch = fgetc(stdin); // Ű���忡�� ���� �Է�
		if (ch == EOF) {
			break;
		}
		fputc(ch,stdout); // ȭ�鿡 ���� ���

	}
	return 0;
}