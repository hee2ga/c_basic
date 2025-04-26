#include<stdio.h>
#include<stdlib.h>

int is_prime(int num) {
	if (num < 2)return 0;
	for (int i = 2;i * i <= num;i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main(void) {

	int* arr;
	int num;
	int i;
	int count = 0;

	printf("> ��� �Է� : ");
	scanf("%d", &num);

	arr = (int*)malloc((num - 1) * sizeof(int)); // 2���ʹϱ� num-1

	if (arr == NULL) {
		printf("# �޸𸮰� �����մϴ�. ");
		exit(1);
	}

	// �Ҽ� �Ǻ� �� ����
	for (i = 2;i <= num;i++) {
		if(is_prime(i)){
			arr[i - 2] = i; // �Ҽ��� ���� ����
		}
		else {
			arr[i - 2] = 0; // �Ҽ��� �ƴϸ� 0 ����
		}

	}
	
	// ���(���ٿ� 5��)
	for (i = 0;i <= num-2;i++) {
		if (arr[i] != 0) {
			printf("%3d ", arr[i]);
		}
		else {
			printf("  X ");
		}
		count++;
		if (count % 5 == 0) printf("\n");
	}
	printf("\n");

	free(arr);

	

	return 0;
}