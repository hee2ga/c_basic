#include<stdio.h>
int main(void) {
	char str[100]; // 문자열저장
	int count = 0; // 바뀐 문자수
	int i,len;

	printf("문장 입력 : ");
	gets(str);

	len = sizeof(str) / sizeof(str[0]);

	for (i = 0;i < len;i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;// 대문자에 32를 더하면 소문자가 됨!
			count++;
		}
	}
	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", count);

	return 0;
}