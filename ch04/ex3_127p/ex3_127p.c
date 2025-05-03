#include<stdio.h>

int main(void) {

	int kor = 3, eng = 5, mat = 4; // 국어 영어 수학학점
	int credits; // 전체 학점
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9; // 각과목의 평점
	double grade; // 평점의 평균

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3.0;

	res = (credits >= 10) && (grade > 4.0);
	printf("%d", res);



	return 0;
}