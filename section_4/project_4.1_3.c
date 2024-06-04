#include <stdio.h>

int main(void){

	int dig1, dig2, dig3;

	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &dig3, &dig2, &dig1);
	printf("The reversal is: %d%d%d\n", dig1, dig2, dig3);
	return 0;

}
