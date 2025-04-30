/*
	�ؽ�Ʈ���Ͽ� ��ϵ��� ���� �ܾ ã�� ���ο� ���Ͽ� ���
	��� �ܾ��� ���̴� �ִ� 20��, ��� �ܾ���� �ִ� 10���� �����ϸ�
	������ �ܾ���� ���Ѿ���
*/
#include <stdio.h>
#include <string.h>

int is_registered(char word[], char registered[][21], int reg_count) {
    for (int i = 0; i < reg_count; i++) {
        if (strcmp(word, registered[i]) == 0) {
            return 1; // ��ϵ�
        }
    }
    return 0; // ��� �ȵ�
}

int main(void) {
    FILE* fpA, * fpB, * fpC;
    char registered[10][21]; // �ִ� 10���� ��� �ܾ� ���� + �ι��� ������ ���� ��(21)
    int reg_count = 0;       // ���� ��� �ܾ� ��

    char word[21]; // �ܾ� �ϳ� ����� (�ִ� 20�� + �ι���)

    // a.txt ����
    fpA = fopen("a.txt", "r");
    if (fpA == NULL) {
        printf("a.txt ���� ����\n");
        return 1;
    }

    // a.txt���� �ܾ���� �о� registered �迭�� ����
    // �ѹ��� �ִ� 20�ھ� �ܾ ����
    while (fscanf(fpA, "%20s", registered[reg_count]) == 1) { 
        reg_count++;
        if (reg_count >= 10) break; // �ִ� 10�������� ����
    }
    fclose(fpA);

    // b.txt ���� (�˻� ���)
    fpB = fopen("b.txt", "r");
    if (fpB == NULL) {
        printf("b.txt ���� ����\n");
        return 1;
    }

    // c.txt ���� (��� ���)
    fpC = fopen("c.txt", "w");
    if (fpC == NULL) {
        printf("c.txt ���� ����\n");
        fclose(fpB);
        return 1;
    }

    // b.txt���� �ܾ� �ϳ��� �б�
    while (fscanf(fpB, "%20s", word) == 1) {
        if (!is_registered(word, registered, reg_count)) {
            fprintf(fpC, "%s\n", word); // ��� �ȵ� �ܾ ���
        }
    }

    // ���� �ݱ�
    fclose(fpB);
    fclose(fpC);

    return 0;
}
