#include<stdio.h>
#include<stdlib.h>

typedef struct train Train;

struct train {
	int seats; // 객차의 좌석수
	Train* next; // 다음 객차를 가리키는 포인터
};

int main(void) {

	Train* head = NULL, * tail = NULL; // 열차 맨 앞칸과 맨뒷칸
	int i;

	for (i = 0;i < 5;i++) { // 열차칸 5개 만들기
		if (head == NULL) { // 처음 열차칸을 만들때
			head = tail = (Train*)malloc(sizeof(Train)); // head와 tail 이 같은 열차칸을 가리킴
		}
		else {
			tail->next=(Train*)malloc(sizeof(Train)); // tail의 next칸에 새 칸을 만든다
			tail = tail->next; // tail을 새로만든칸으로 이동
		}
	}

	return 0;
}