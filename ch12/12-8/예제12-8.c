#include<stdio.h>
#include<string.h>

int main(void) {
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1); // strawberry
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1); // apple

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1); // banana

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1); // apple

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1); // banana
	return 0;
}