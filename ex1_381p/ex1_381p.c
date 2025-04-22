/*
	키보드로 세 단어를 입력하면 사전 순서대로 출력하는 프로그램
*/

#include<stdio.h>
#include<string.h>

int main(void) {

	char str1[80], str2[80], str3[80];
	char temp[80];

	printf("세 단어 입력 : ");
	scanf("%s%s%s", str1, str2, str3);

	if (strcmp(str1, str2) > 0) { // str1이 str2보다 사전에 나중에 나온다면
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);

	}

	if (strcmp(str1, str3) > 0) { // str1이 str3보다 사전에 나중에 나온다면
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);

	}

	if (strcmp(str2, str3) > 0) { // str2이 str3보다 사전에 나중에 나온다면
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);

	}

	printf("%s %s %s", str1, str2, str3);

	return 0;
}