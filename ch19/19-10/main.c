#include<stdio.h>
#include "point.h"
#include "line.h"

int main(void){
	Line a = { {1,2},{5,6} };
	Point b; // 가운데 점의 좌표 저장

	b.x = (a.first.x + a.second.x) / 2; // 가운데 점의 x좌표 계산
	b.y = (a.first.y + a.second.y) / 2; // 가운데 점의 y좌표 계산
	printf("선의 가운데 점의 좌표 : (%d, %d)\n", b.x, b.y);

	return 0;
}