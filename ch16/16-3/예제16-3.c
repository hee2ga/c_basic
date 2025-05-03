#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int* pi;
	int size = 5; // 한번에 할당할 저장공간의 크기(int형 변수 5개씩)
	int count = 0; // 현재 입력된 양수의 개수
	int num;
	int i;
	pi = (int*)calloc(size, sizeof(int));// 5개의 저장공간 할당
	
	while (1) {
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size) {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));// 크기를 늘려서 재할당
		}
		pi[count++] = num;
	}

	for (i = 0;i < count;i++) {
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}