#include<stdio.h>
#include<string.h>

int main(void) {

	char str1[100] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}