#include<stdio.h>

struct cracker{
	int price;
	int calorise;
};

int main(void) {

	struct cracker basasak;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d%d", &(basasak.price), &(basasak.calorise));

	printf("�ٻ���� ���� : %d��\n", basasak.price);
	printf("�ٻ���� ���� : %dkcal\n", basasak.calorise);


	return 0;
}