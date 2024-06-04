#include <stdio.h>

int main(void){

	int input;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &input);
	printf("Your number in octal is: %o\n", input);
	return 0;

}
