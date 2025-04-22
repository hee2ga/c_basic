#include<stdio.h>
#include<string.h>

int main(void) {

	char str[80];
	char res_str[80];
	char* star = "**********";
	int len;

	printf("단어 입력 : ");
	scanf("%s", str);

	len = strlen(str); // 입력한 문자의 길이

	if (len <= 5) { // 입력한 문자의 길이가 5자 이내인경우
		strcpy(res_str, str);
	}
	else { // 입력한 문자의 길이가 5자를 넘는 경우
		strncpy(res_str, str, 5); // 앞 5글자만 붙이기
		res_str[5] = '\0'; // 앞 5글자 뒤 널문자 추가
		strncat(res_str, star, len - 5); // 5글자 뒷부분을 *로 채우기
	}

	

	printf("입력한 단어 : %s, 생략한 단어 : %s", str, res_str);

	return 0;
}
