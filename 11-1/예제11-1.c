#include<stdio.h>

int main(void) {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A'); // 대문자에 32 더하면 소문자!
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);
	return 0;
}