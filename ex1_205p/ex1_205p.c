#include <stdio.h>

int main(void) {
    int n, count = 0, i, j = 0;

    printf("2 �̻��� ������ �Է��ϼ��� : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        for (j = 2; j < i; j++) // ����������� �Ҽ� �ƴ� -> �ݺ��ߴ�
            if (i % j == 0) break;

        if (j == i) { // �ݺ����� ������ ����ǰ� �� �� ���
            printf("%5d", i); // 5ĭ �ʺ��
            if (++count % 5 == 0) printf("\n"); // �Ҽ� 5���� ���
        }
    }

    if (count % 5) printf("\n");

    return 0;
}
