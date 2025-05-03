#include <stdio.h>

int main(void) {

    int ch;
    int len = 0;
    int max_len = 0;

    while ((ch = getchar()) != EOF) { // ctrl+z�� �Է¾ȵɶ� ����
        if (ch == '\n') { // enter�� �ԷµǸ�
            if (len > max_len) {
                max_len = len;
            }
            len = 0; // ���� ���� �������ؼ� 0���� �ʱ�ȭ
        }
        else { // ���ڰ� �ԷµǸ�
            len++; // ���ڼ� ����
        }
    }


    printf("���� �� �ܾ��� ���� : %d\n", max_len);

    return 0;
}
