#include <stdio.h>

// A horrific implementation of a classic magic square problem.

int main(void){

	int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen;

	printf("Pleae enter the numbers 1-16 seperated by a space in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, 
	&ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

	printf("Row Sums = %d %d %d %d\n",one + two + three + four,
					  five + six + seven + eight,
					  nine + ten + eleven + twelve,
					  thirteen + fourteen + fifteen + sixteen);
	printf("Column Sums = %d %d %d %d\n", one + five + nine + thirteen, two + six + ten + fourteen,
					      three + seven + eleven + fifteen, four + eight + twelve + sixteen);
	printf("Diagonal Sums = %d %d\n", one + six + eleven + sixteen, four + seven + ten + thirteen);
	return 0;	

}
