#include<stdio.h>

int main(void) {

	int ch;
	int cnt = 0;
	ch = getchar(); // ���� �Է¹���

	while (ch != '\n') { // ���๮�ڰ� �ƴ϶�� -> �������� ���๮�� �Է¹����� ����
		if ((ch >= 'a') && (ch <= 'z')) cnt++; // �ҹ��ڶ�� cnt++
		ch = getchar(); // �ٽ� �Է¹���
	}

	printf("�ҹ����� ���� : %d\n", cnt);

	return 0;
}