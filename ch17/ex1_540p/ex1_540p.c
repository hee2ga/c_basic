#include <stdio.h>

typedef struct student {
    int num;
    char name[20];
    int kor;
    int eng;
    int mat;
    int total;
    double avg;
    char grade;
} Student;

int main(void) {
    Student list[5];
    int i, j;

    // �л� ������ �Է�
    for (i = 0; i < 5; i++) {
        printf("�й� : ");
        scanf("%d", &list[i].num);
        printf("�̸� : ");
        scanf("%s", list[i].name);
        printf("����, ����, ���� ���� : ");
        scanf("%d%d%d", &list[i].kor, &list[i].eng, &list[i].mat);
    }

    // ���� �� ��� ���
    for (i = 0; i < 5; i++) {
        list[i].total = list[i].kor + list[i].eng + list[i].mat;
        list[i].avg = list[i].total / 3.0;
    }

    // ���� ���
    for (i = 0; i < 5; i++) {
        if (list[i].avg >= 90.0)
            list[i].grade = 'A';
        else if (list[i].avg >= 80.0)
            list[i].grade = 'B';
        else if (list[i].avg >= 70.0)
            list[i].grade = 'C';
        else
            list[i].grade = 'F';
    }

    // ���� �� ������ ���
    printf("\n# ���� �� ������ ...\n");
    for (i = 0; i < 5; i++) {
        printf("%d %s %d %d %d %d %.1lf %c\n",
            list[i].num, list[i].name, list[i].kor, list[i].eng, list[i].mat,
            list[i].total, list[i].avg, list[i].grade);
    }

    // ���������� �������� ����
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (list[i].total < list[j].total) {
                Student temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    // ���� �� ������ ���
    printf("\n# ���� �� ������ ...\n");
    for (i = 0; i < 5; i++) {
        printf("%d %s %d %d %d %d %.1lf %c\n",
            list[i].num, list[i].name, list[i].kor, list[i].eng, list[i].mat,
            list[i].total, list[i].avg, list[i].grade);
    }

    return 0;
}
