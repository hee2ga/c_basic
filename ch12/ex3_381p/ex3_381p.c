#include<stdio.h>
#include<string.h>

int main(void) {

	char str[80];
	char res_str[80];
	char* star = "**********";
	int len;

	printf("�ܾ� �Է� : ");
	scanf("%s", str);

	len = strlen(str); // �Է��� ������ ����

	if (len <= 5) { // �Է��� ������ ���̰� 5�� �̳��ΰ��
		strcpy(res_str, str);
	}
	else { // �Է��� ������ ���̰� 5�ڸ� �Ѵ� ���
		strncpy(res_str, str, 5); // �� 5���ڸ� ���̱�
		res_str[5] = '\0'; // �� 5���� �� �ι��� �߰�
		strncat(res_str, star, len - 5); // 5���� �޺κ��� *�� ä���
	}

	

	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s", str, res_str);

	return 0;
}
