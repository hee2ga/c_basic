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

    // 학생 데이터 입력
    for (i = 0; i < 5; i++) {
        printf("학번 : ");
        scanf("%d", &list[i].num);
        printf("이름 : ");
        scanf("%s", list[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &list[i].kor, &list[i].eng, &list[i].mat);
    }

    // 총점 및 평균 계산
    for (i = 0; i < 5; i++) {
        list[i].total = list[i].kor + list[i].eng + list[i].mat;
        list[i].avg = list[i].total / 3.0;
    }

    // 학점 계산
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

    // 정렬 전 데이터 출력
    printf("\n# 정렬 전 데이터 ...\n");
    for (i = 0; i < 5; i++) {
        printf("%d %s %d %d %d %d %.1lf %c\n",
            list[i].num, list[i].name, list[i].kor, list[i].eng, list[i].mat,
            list[i].total, list[i].avg, list[i].grade);
    }

    // 총점순으로 내림차순 정렬
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (list[i].total < list[j].total) {
                Student temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    // 정렬 후 데이터 출력
    printf("\n# 정렬 후 데이터 ...\n");
    for (i = 0; i < 5; i++) {
        printf("%d %s %d %d %d %d %.1lf %c\n",
            list[i].num, list[i].name, list[i].kor, list[i].eng, list[i].mat,
            list[i].total, list[i].avg, list[i].grade);
    }

    return 0;
}
