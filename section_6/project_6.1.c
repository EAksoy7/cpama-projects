#include <stdio.h>

int main(void){

	float largest_num = 0.0f, input = 0.0f;

	printf("Enter a series of numbers, then enter 0 to terminate the input sequence.\n");
	printf("Then, the largest number entered will be printed.\n\n");
	printf("Begin input sequence: \n");

	for(;;){

		scanf("%f", &input);
		if(input == 0){
			printf("The largest number entered was: %g\n", largest_num);
			return 0;	
		}	
		else if(input > largest_num){
			largest_num = input;	
		}
	}

}
