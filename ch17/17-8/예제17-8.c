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
		{"홍길동",23,"111-111","울릉도 독도"},
		{"이순신",35,"222-222","서울 건천동"},
		{"장보고",19,"333-333","완도 청해진"},
		{"유관순",15,"444-444","충남 천안"},
		{"안중근",45,"555-555","황해도 해주"}
	};
	print_list(list); // 배열명은 첫번째 배열요소의 주소!

	return 0;
}

void print_list(struct address* lp) {
	int i;
	for (i = 0;i < 5;i++) {
		printf("%10s%5d%15s%20s\n", (lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}