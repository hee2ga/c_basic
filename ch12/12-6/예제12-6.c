#include<stdio.h>

int main(void) {

	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age); // 개행전까지 입력받음<개행이 남아있는 상태>

	fgetc(stdin); // 개행문자 제거

	printf("이름 입력  : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);
	return 0;
}