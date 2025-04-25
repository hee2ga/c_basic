#include<stdio.h>
#include<string.h>
/*
	2���� ���̿� Ű�� �Է��� �� �ٲپ� ���
	��, ���̿� Ű�� �ٲٴ� �Լ��� int���� double�� 
	��� ��ȯ�� �� �ֵ��� �ϳ��� �Լ��� ���� -> void ������!
*/
void swap(char *type,void* a, void* b);

int main(void) {

	int age1, age2;
	double height1, height2;

	printf("ù ��° ����� ���̿� Ű �Է� : ");
	scanf("%d%lf", &age1, &height1);

	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d%lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);
	
	printf("��ȯ ��\n");
	printf("ù ��° ����� ���̿� Ű : %d %.1lf\n", age1, height1);
	printf("�� ��° ����� ���̿� Ű : %d %.1lf\n", age2, height2);
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