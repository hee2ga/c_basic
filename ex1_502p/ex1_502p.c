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

	printf("> 양수 입력 : ");
	scanf("%d", &num);

	arr = (int*)malloc((num - 1) * sizeof(int)); // 2부터니까 num-1

	if (arr == NULL) {
		printf("# 메모리가 부족합니다. ");
		exit(1);
	}

	// 소수 판별 후 저장
	for (i = 2;i <= num;i++) {
		if(is_prime(i)){
			arr[i - 2] = i; // 소수면 숫자 저장
		}
		else {
			arr[i - 2] = 0; // 소수가 아니면 0 저장
		}

	}
	
	// 출력(한줄에 5개)
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