#include <stdio.h>

int main(void){

	int days, starting, counter;

	printf("This program prints a one-month calendar.\n");
	printf("Please enter the number of days in the month: ");
	scanf("%d", &days);
	printf("Please enter the starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting);

	printf("  S  M  T  W  T  F  S\n");

	for (int i = 1; i <= days; i++){

		while(starting > 0){
			printf("  ");
			starting--;
			counter++;
		}

		if (counter % 8 == 0){
			printf("\n");
			counter++;
		}
		
		printf("%3d", i);
		counter++;
	
	}

	printf("\n");

	return 0;

}
