#include<stdio.h>

int main(void) {
	
	int chest = 95;
	char size;

	if (chest <= 90) {
		size = 'S';
	}
	else if (chest <= 100) {
		size = 'M';
	}
	else {
		size = 'L';
	}
	printf("�����ѷ� %d�� ������� %c�Դϴ�.", chest, size);

	return 0;
}