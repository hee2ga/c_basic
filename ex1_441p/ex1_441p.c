#include <stdio.h>

int main(void) {

    int ary[5][6] = { 0 };
    int i, j;
    int value = 1;
    int total=0;
    int row_sum, col_sum;

    // 4�� 5�� �κ� �ʱ�ȭ
    for (i = 0;i < 4;i++) {
        for (j = 0;j < 5;j++) {
            ary[i][j] = value;
            total += value; // ������ ��ҿ� ���� 1~20 ����
            value++;
        }
    }

    // �� ���� �� ����
    for (i = 0;i < 5;i++) {
        row_sum = 0;
        for (j = 0;j < 6;j++) {
            row_sum += ary[i][j];
        }
        ary[i][5] = row_sum;
    }

    // �� ���� �� ����
    for (j = 0;j < 6;j++) {
        col_sum = 0;
        for (i = 0;i < 5;i++) {
            col_sum += ary[i][j];
        }
        ary[4][j] = col_sum;
    }

    // ��ü ���� �ֱ�
    ary[4][5] = total;

    // ����ϱ�
    for (i = 0;i < 5;i++) {
        for (j = 0;j < 6;j++) {
         
            printf("%d ", ary[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}
