#include<stdio.h>
#include<string.h>

int main(void) {

	FILE* fp;
	char str[20];

	fp = fopen("a.txt", "a+"); // 읽기 가능한 추가 모드로 개방
	if (fp == NULL) {
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	while (1) {
		printf("파일 이름 : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) { // end 입력 시 종료
			break;
		}
		else if (strcmp(str, "list") == 0) { // list 입력하면 파일의 내용 확인
			// 위치지시자를 시작 위치로 옮기기 전에 버퍼 내용을 하드디스크로 출력
			fseek(fp, 0, SEEK_SET); 
			while (1) {
				fgets(str, sizeof(str), fp);
				if (feof(fp)) { // 파일의 내용을 모두 읽으면 종료
					break;
				}
				printf("%s", str);
			}
		}
		else {
			fprintf(fp, "%s\n", str);
		}
	}
	fclose(fp);

	return 0;
}