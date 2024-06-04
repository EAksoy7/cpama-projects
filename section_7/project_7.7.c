#include <stdio.h>

int main(void){

	int num1, denom1, num2, denom2, result_num, result_denom;
	char operator;

	printf("Please enter two frations separated by the arithemtic operation you wish to do: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);
	
	switch(operator){

		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = num2 * denom1;
			break;

	}
		printf("The result is: %d/%d\n", result_num, result_denom);

	return 0;

}
