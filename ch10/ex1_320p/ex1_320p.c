// 1~45 �߿� 6���� ���� �ٸ� ���� �迭�� �Է��ϰ� ��� 
// �Է��� ���� �̹� ����� ���� ������ �����޽����� ����ϰ� �ٽ� �Է�
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
		printf("��ȣ �Է� : ");
		scanf("%d", &lotto_nums[i]);
		if (lotto_nums[i] > 45) {

			printf("1~45 �߿� ��ȣ�� �Է����ּ���.");
			i--;
		}

		for (int j = 0;j < i;j++) {
			if (lotto_nums[i] == lotto_nums[j]) {
				printf("���� ��ȣ�� �ֽ��ϴ�!");
				i--;
				break;
			}

		}

;
	}

}

void print_num(int* lotto_nums){
	printf("�ζǹ�ȣ : ");
	for (int i = 0;i < 6;i++) {
		printf("%d\t", lotto_nums[i]);
	}

}