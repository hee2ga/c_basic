#include<stdio.h>

struct marriage {
	char name[20];
	int age;
	char gender;
	double height;
};

int main(void) {

	struct marriage m1 = { "Andy",22,'m',187.5 };
	struct marriage* mp = &m1;

	printf("이름 : %s\n", mp->name);
	printf("나이 : %d\n", mp->age);
	printf("성별 : %c\n", mp->gender);
	printf("키 : %.1lf\n", mp->height);

	return 0;
}