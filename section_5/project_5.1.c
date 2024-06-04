#include <stdio.h>

int main(void){

	int input;

	printf("Pleae enter a number less than 10000: ");
	scanf("%d", &input);

	if (input < 10){
		printf("The number %d has 1 digit\n", input);
	}
	else if (input < 100){
		printf("The number %d has 2 digits\n", input);
	}
	else if (input < 1000){
		printf("The number %d has 3 digits\n", input);
	}
	else if (input < 10000){
		printf("The number %d has 4 digits\n", input);
	}
	else {
		printf("The number %d is outside of the acceptable range. You are either a fool or a prick.\n", input);
	}
	return 0;
}
