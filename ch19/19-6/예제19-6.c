#include<stdio.h>
#define VER 7
#define BIT16

int main(void) {
	int max;

#if VER>=6
	printf("���� %d�Դϴ�\n", VER);
#endif // #if ��

#ifdef BIT16 // ��ũ�� �� BIT16�� ���ǵǾ� ������
	max = 32767;
#else
	max = 2147483647;
#endif// #ifdef ��

	printf("int�� ������ �ִ� : %d\n", max);

	return 0;
}