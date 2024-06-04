#include <stdio.h>

int main(void){

	int day, month, year;

	printf("Please enter a date in the form mm/dd/yyyy: ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("%d%-.2d%-.2d\n", year, month, day);
	return 0;

}
