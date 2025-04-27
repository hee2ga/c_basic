#include<stdio.h>
#include<stdlib.h>

typedef struct train Train;

struct train {
	int seats; // ������ �¼���
	Train* next; // ���� ������ ����Ű�� ������
};

int main(void) {

	Train* head = NULL, * tail = NULL; // ���� �� ��ĭ�� �ǵ�ĭ
	int i;

	for (i = 0;i < 5;i++) { // ����ĭ 5�� �����
		if (head == NULL) { // ó�� ����ĭ�� ���鶧
			head = tail = (Train*)malloc(sizeof(Train)); // head�� tail �� ���� ����ĭ�� ����Ŵ
		}
		else {
			tail->next=(Train*)malloc(sizeof(Train)); // tail�� nextĭ�� �� ĭ�� �����
			tail = tail->next; // tail�� ���θ���ĭ���� �̵�
		}
	}

	return 0;
}