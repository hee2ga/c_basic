#include<stdio.h>

int main(void) {

	int ch;
	int cnt = 0;
	ch = getchar(); // 문자 입력받음

	while (ch != '\n') { // 개행문자가 아니라면 -> 마지막에 개행문자 입력받으면 종료
		if ((ch >= 'a') && (ch <= 'z')) cnt++; // 소문자라면 cnt++
		ch = getchar(); // 다시 입력받음
	}

	printf("소문자의 개수 : %d\n", cnt);

	return 0;
}