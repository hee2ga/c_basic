#include<stdio.h>

char* my_strcpy(char* pd, char* ps); // ���� ���� �� pd, ���� �� �� ps

int main(void) {

	char str[80] = "strawberry";
	
	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
	return 0;
}

char* my_strcpy(char* pd, char* ps) {
	char* po = pd; // pd�� ��ȯ���� ����

	while (*ps != '\0') { // �ι��ڰ� �ƴѵ���
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0'; // ���� ���� �� �ι��� ���̱�<�Ⱥ��̸� appleberry��>

	return po; // ���簡 ���� �����ּ�

}