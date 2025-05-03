#include<stdio.h>
#define INPUT_QUESTION printf("수식입력(종료 Ctrl+z) : ")
#define INPUT_FORMULA scanf("%d%c%d",&a,&op,&b)
#define SUM(a,b) ((a)+(b))
#define SUB(a,b) ((a)-(b))
#define MUL(a,b) ((a)*(b))
#define DIV(a,b) ((a)/(b))
#define PRINT_RESULT(a,b,op,result) printf("%d %c %d = %d\n",a,op,b,result)

int main(void) {

	int a, b;
	char op;
	int result;

	while (1) {
		INPUT_QUESTION;
		if (INPUT_FORMULA == EOF) break;

		switch (op) {
		case '+':
			result = SUM(a, b); 
			PRINT_RESULT(a,b,op,result);
			break;
		case '-': 
			result = SUB(a, b);
			PRINT_RESULT(a, b, op, result);
			break;
		case '*': 
			result = MUL(a, b); 
			PRINT_RESULT(a, b, op, result);
			break;
		case '/': 
			result = DIV(a, b); 
			PRINT_RESULT(a, b, op, result);
			break;
		}
		
	}

	return 0;
}