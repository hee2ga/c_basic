#include<stdio.h>

int main(void) {
	
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt"); // 텍스트 모드로 출력파일 개방
	fprintf(afp, "%d", num); // num값을 문자로 변환해 출력

	bfp = fopen("b.txt", "wb"); // 바이너리 모드로 출력파일 개방
	fwrite(&num, sizeof(num), 1, bfp); // num의 값을 그대로 파일에 출력

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb"); // 바이너리 모드로 입력파일 개방
	fread(&res, sizeof(res),1, bfp);
	printf("%d", res);

	fclose(bfp);


	return 0;
}