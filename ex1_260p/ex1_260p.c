#include<stdio.h>
int main(void) {
	char str[100]; // ���ڿ�����
	int count = 0; // �ٲ� ���ڼ�
	int i,len;

	printf("���� �Է� : ");
	gets(str);

	len = sizeof(str) / sizeof(str[0]);

	for (i = 0;i < len;i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;// �빮�ڿ� 32�� ���ϸ� �ҹ��ڰ� ��!
			count++;
		}
	}
	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d\n", count);

	return 0;
}