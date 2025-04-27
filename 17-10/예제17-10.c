#include<stdio.h>

union student {
	int num;
	double grade;
};

int main(void) {

	union student s1 = { 315 };

	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num); // 학번의 초기값이 학점멤버에 의해서 바뀜

	return 0;
}