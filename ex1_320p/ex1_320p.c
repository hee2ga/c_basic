// 1~45 중에 6개의 서로 다른 수를 배열에 입력하고 출력 
// 입력한 수가 이미 저장된 수와 같으면 에러메시지를 출력하고 다시 입력
#include<stdio.h>

void input_num(int* lotto_nums);
void print_num(int* lotto_nums);

int main(void) {

	int lotto_nums[6];

	input_num(lotto_nums);
	print_num(lotto_nums);

	return 0;
}

void input_num(int* lotto_nums) {

	for (int i = 0;i < 6;i++) {
		printf("번호 입력 : ");
		scanf("%d", &lotto_nums[i]);
		if (lotto_nums[i] > 45) {

			printf("1~45 중에 번호를 입력해주세요.");
			i--;
		}

		for (int j = 0;j < i;j++) {
			if (lotto_nums[i] == lotto_nums[j]) {
				printf("같은 번호가 있습니다!");
				i--;
				break;
			}

		}

;
	}

}

void print_num(int* lotto_nums){
	printf("로또번호 : ");
	for (int i = 0;i < 6;i++) {
		printf("%d\t", lotto_nums[i]);
	}

}