#include <stdio.h>

int main(void){

	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c, first_sum, second_sum, total;

	printf("Please enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Please enter the first group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Please enter the second group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Please enter the final digit: ");
	scanf("%1d", &c);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	printf("%s\n", 	c == 9 - ((total - 1) % 10) ? "VALID": "NOT VALID");
	
	return 0;
}
