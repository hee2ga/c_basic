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

	printf("�̸� : %s\n", mp->name);
	printf("���� : %d\n", mp->age);
	printf("���� : %c\n", mp->gender);
	printf("Ű : %.1lf\n", mp->height);

	return 0;
}