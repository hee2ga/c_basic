#include<stdio.h>

char* my_strcpy(char* pd, char* ps); // 복사 받을 곳 pd, 복사 할 곳 ps

int main(void) {

	char str[80] = "strawberry";
	
	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
	return 0;
}

char* my_strcpy(char* pd, char* ps) {
	char* po = pd; // pd값 반환위해 저장

	while (*ps != '\0') { // 널문자가 아닌동안
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0'; // 복사 끝난 후 널문자 붙이기<안붙이면 appleberry됨>

	return po; // 복사가 끝난 시작주소

}