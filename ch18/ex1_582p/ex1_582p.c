/*
	텍스트파일에 등록되지 않은 단어를 찾아 새로운 파일에 출력
	모든 단어의 길이는 최대 20자, 등록 단어수는 최대 10개로 제한하며
	검출대상 단어수는 제한없음
*/
#include <stdio.h>
#include <string.h>

int is_registered(char word[], char registered[][21], int reg_count) {
    for (int i = 0; i < reg_count; i++) {
        if (strcmp(word, registered[i]) == 0) {
            return 1; // 등록됨
        }
    }
    return 0; // 등록 안됨
}

int main(void) {
    FILE* fpA, * fpB, * fpC;
    char registered[10][21]; // 최대 10개의 등록 단어 저장 + 널문자 포함한 글자 수(21)
    int reg_count = 0;       // 현재 등록 단어 수

    char word[21]; // 단어 하나 저장용 (최대 20자 + 널문자)

    // a.txt 열기
    fpA = fopen("a.txt", "r");
    if (fpA == NULL) {
        printf("a.txt 열기 실패\n");
        return 1;
    }

    // a.txt에서 단어들을 읽어 registered 배열에 저장
    // 한번에 최대 20자씩 단어를 읽음
    while (fscanf(fpA, "%20s", registered[reg_count]) == 1) { 
        reg_count++;
        if (reg_count >= 10) break; // 최대 10개까지만 저장
    }
    fclose(fpA);

    // b.txt 열기 (검사 대상)
    fpB = fopen("b.txt", "r");
    if (fpB == NULL) {
        printf("b.txt 열기 실패\n");
        return 1;
    }

    // c.txt 열기 (결과 출력)
    fpC = fopen("c.txt", "w");
    if (fpC == NULL) {
        printf("c.txt 열기 실패\n");
        fclose(fpB);
        return 1;
    }

    // b.txt에서 단어 하나씩 읽기
    while (fscanf(fpB, "%20s", word) == 1) {
        if (!is_registered(word, registered, reg_count)) {
            fprintf(fpC, "%s\n", word); // 등록 안된 단어만 출력
        }
    }

    // 파일 닫기
    fclose(fpB);
    fclose(fpC);

    return 0;
}
