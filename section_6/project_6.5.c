#include <stdio.h>

int main(void){

	int digits, input;

	printf("Please enter a number to find out how many digits it has: ");
	scanf("%d", &input);

	do{
		input /= 10;
		digits++;
	}
	while (input > 0);

	printf("The number of digits in the input is: %d\n", digits);
	return 0;

}
