#include<stdio.h>

int main(void) {
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45); // 소수점 이하 첫째자리까지 출력(둘째자리에서 반올림)
	printf("%.10lf\n", 3,4); // 소수점 이하 열째자리 출력

	printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	return 0;
}