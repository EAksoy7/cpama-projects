#include <stdio.h>

int main(void){

	int input, tens, units;

	printf("Please enter a 2 digit number: ");
	scanf("%d", &input);

	tens = input / 10;
	units = input % 10;

	if (tens == 1){
		switch(input){
			case 10:
				printf("You printed the number: ten.\n");
				break;
			case 11:
				printf("You printed the number: eleven.\n");
				break;
			case 12:
				printf("You printed the number: twelve.\n");
				break;
			case 13:
				printf("You printed the number: thirteen.\n");
				break;
			case 14:
				printf("You printed the number: fourteen.\n");
				break;
			case 15:
				printf("You printed the number: fifteen.\n");
				break;
			case 16:
				printf("You printed the number: sixteen.\n");
				break;
			case 17:
				printf("You printed the number: seventeen.\n");
				break;
			case 18:
				printf("You printed the number: eighteen.\n");
				break;
			case 19:
				printf("You printed the number: nineteen.\n");
				break;
			
		}	
	}
	else{
		printf("You printed the number: ");		

		switch(tens){
			case 2:
				printf("twenty");
				break;
			case 3:
				printf("thirty");
				break;
			case 4:
				printf("forty");
				break;
			case 5:
				printf("fifty");
				break;
			case 6:
				printf("sixty");
				break;
			case 7:
				printf("seventy");
				break;
			case 8:
				printf("eighty");
				break;
			case 9:
				printf("ninety");
				break;
			
		}

		switch(units){
			case 0:
				printf(".\n");
				break;
			case 1:
				printf("-one.\n");
				break;
			case 2:
				printf("-two.\n");
				break;
			case 3:
				printf("-three.\n");
				break;
			case 4:
				printf("-four.\n");
				break;
			case 5:
				printf("-five.\n");
				break;
			case 6:
				printf("-six.\n");
				break;
			case 7:
				printf("-seven.\n");
				break;
			case 8:
				printf("-eight.\n");
				break;
			case 9:
				printf("-nine.\n");
				break;
			
		}
	}
	return 0;	

}
