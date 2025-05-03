extern int count; // main.c의 전역변수 count 공유
extern int total; // input.c의 전역변수 total 공유

double average(void) {
	return total / (double)count;
}