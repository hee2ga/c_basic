#include <stdio.h>

int main(void) {
    int n, count = 0, i, j = 0;

    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        for (j = 2; j < i; j++) // 나누어떨어지면 소수 아님 -> 반복중단
            if (i % j == 0) break;

        if (j == i) { // 반복문이 끝까지 실행되고 난 후 출력
            printf("%5d", i); // 5칸 너비로
            if (++count % 5 == 0) printf("\n"); // 소수 5개씩 출력
        }
    }

    if (count % 5) printf("\n");

    return 0;
}
