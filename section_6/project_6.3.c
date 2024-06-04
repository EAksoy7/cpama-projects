#include <stdio.h>

int main(void){

	int num, denom, first_num, second_num, rem;

	printf("Enter a fraction to find it's lowest terms: ");
	scanf("%d/%d", &num, &denom);

	first_num = num;
	second_num = denom;

	while (second_num != 0){

		rem = first_num % second_num;
		first_num = second_num;
		second_num = rem;	

	}
		
	printf("The lowest terms are %d/%d.\n", num / first_num , denom / first_num);

	return 0;

}
