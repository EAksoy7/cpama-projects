#include <stdio.h>

int main(void){

	int first_num, second_num, remainder;

	printf("Please enter two integers separated by spaces to find their greatest common divisor: ");
	scanf("%d %d", &first_num, &second_num);

	while(first_num > 0){
		
		remainder = second_num % first_num;
		second_num = first_num;
		first_num = remainder;
	
	}

	printf("The greatest common divisor is: %d\n", second_num);
	return 0;
}
