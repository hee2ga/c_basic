#include<stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main(void) {
	struct address list[5] = {
		{"ȫ�浿",23,"111-111","�︪�� ����"},
		{"�̼���",35,"222-222","���� ��õ��"},
		{"�庸��",19,"333-333","�ϵ� û����"},
		{"������",15,"444-444","�泲 õ��"},
		{"���߱�",45,"555-555","Ȳ�ص� ����"}
	};

	int i;

	for (i = 0;i < 5;i++) {
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;
}