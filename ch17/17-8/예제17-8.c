#include<stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void) {
	struct address list[5] = {
		{"ȫ�浿",23,"111-111","�︪�� ����"},
		{"�̼���",35,"222-222","���� ��õ��"},
		{"�庸��",19,"333-333","�ϵ� û����"},
		{"������",15,"444-444","�泲 õ��"},
		{"���߱�",45,"555-555","Ȳ�ص� ����"}
	};
	print_list(list); // �迭���� ù��° �迭����� �ּ�!

	return 0;
}

void print_list(struct address* lp) {
	int i;
	for (i = 0;i < 5;i++) {
		printf("%10s%5d%15s%20s\n", (lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}