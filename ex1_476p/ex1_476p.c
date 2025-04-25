#include<stdio.h>
#include<string.h>
/*
	2명의 나이와 키를 입력한 후 바꾸어 출력
	단, 나이와 키를 바꾸는 함수는 int형과 double형 
	모두 교환할 수 있도록 하나의 함수로 구현 -> void 포인터!
*/
void swap(char *type,void* a, void* b);

int main(void) {

	int age1, age2;
	double height1, height2;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age1, &height1);

	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);
	
	printf("교환 후\n");
	printf("첫 번째 사람의 나이와 키 : %d %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d %.1lf\n", age2, height2);
	return 0;
}

void swap(char* type, void* a, void* b) {


	if (strcmp(type,"int")==0) {
		int temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	else {
		double temp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = temp;
	}
}