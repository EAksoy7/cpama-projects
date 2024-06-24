#include <stdio.h>
#include <math.h>

int main(void){

	double input = 0.0, old_guess = 0.0, current_guess = 1.0;

	printf("Enter a positive number: ");
	scanf("%lf", &input);

	while(fabs(current_guess - old_guess) > (current_guess * 0.00001)){

		old_guess = current_guess;

		current_guess = (current_guess + (input / current_guess)) / 2;	
	}

	printf("The square root of %g is: %g\n", input, current_guess);
	return 0;
}
