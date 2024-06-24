/*
Computes the facotial of a positive integer
when short is used, will stop functioning after 11
when int is used, will stop functioning after 19
when long is used, will stop functioning after 25
when long long is used, will stop functioning after 25
when float is used, will stop functioning after 34
when double is used, will stop functioning after 170
when long double is used, will stop functioning after 1754
*/

#include <stdio.h>

int main(void){

	float num = 0.0f, orig_num = 0.0f;

	printf("Please enter a positive integer: ");
	scanf("%f", &num);
	orig_num = num;

	for(int i = num - 1; i > 0; i--){
		num *= i;
	}
	printf("Factorial of %f: %f\n", orig_num, num);
	return 0;

}
