#include<stdio.h>

int main(void) {

	double weight, height, bmi;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf%lf", &weight, &height);

	height *= 0.01;

	bmi = weight / (height * height);

	printf((20.0 <= bmi)&&(bmi<25.0) ? "ǥ���Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;
}