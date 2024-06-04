#include <stdio.h>

int main(void){
	int x;

	printf("Please enter a value for x: ");
	scanf("%d", &x);
	printf("Plugging %d for x into 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 gives us the answer:\n", x);
	printf("%d\n", (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);
	printf("The same, this time using Horner's rule; Which shouldn't present a different answer if done correctly.\n%d\n", 
		((((3 * x + 2)* x - 5)* x - 1)* x + 7)* x - 6 );

	return 0;
}
