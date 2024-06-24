#include <stdio.h>

int main(void){

	float result = 0.0f, operand = 0.0f;
	char input;

	printf("Enter an expression: ");
	scanf("%f", &result);

	while((input = getchar()) != '\n'){

		switch(input){
			case '+':
				scanf("%f", &operand);
				result += operand;
				break;
			case '-':
				scanf("%f", &operand);
				result -= operand;
				break;
			case '*':
				scanf("%f", &operand);
				result *= operand;
				break;
			case '/':
				scanf("%f", &operand);
				result /= operand;
				break;
			default:
				continue;
		}
	

	}		
		printf("The result is: %g\n%g\n", result, operand);
		return 0;		

}
