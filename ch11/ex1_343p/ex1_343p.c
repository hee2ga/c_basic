#include <stdio.h>

int main(void) {

    int ch;
    int len = 0;
    int max_len = 0;

    while ((ch = getchar()) != EOF) { // ctrl+z가 입력안될때 실행
        if (ch == '\n') { // enter가 입력되면
            if (len > max_len) {
                max_len = len;
            }
            len = 0; // 다음 문자 세기위해서 0으로 초기화
        }
        else { // 문자가 입력되면
            len++; // 문자수 세기
        }
    }


    printf("가장 긴 단어의 길이 : %d\n", max_len);

    return 0;
}
