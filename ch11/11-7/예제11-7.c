#include<stdio.h>

int main(void) {

	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num); // 입력한 학번과 개행문자(enter) 버퍼에 저장

	getchar(); // 버퍼에 남아있는 개행문자 제거

	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}