#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int** matrix = (int**)malloc(4 * sizeof(int));

	for (int i = 0;i < 4;i++) {
		matrix[i] = (int*)malloc(5 * sizeof(int));
	}

	for (int i = 0;i < 4;i++) {
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}