#include <stdio.h>
#include <ctype.h>

int main(void){

	int hours, minutes;
	char meridiem;

	printf("Enter a 12-hour time, be sure to include PM or AM: ");
	scanf("%2d:%2d", &hours, &minutes);
	meridiem = getchar();

	if(hours > 12 || minutes > 60){
		
		printf("Please enter a valid 12-hour time\n");
		return 0;
	
	}
		
	if(toupper(meridiem) != 'P' && toupper(meridiem) != 'A'){
		meridiem = getchar();
	}

	meridiem = toupper(meridiem);

	if(meridiem == 'A' && hours == 12){	
		hours = 0;
	}
	else if(meridiem == 'P' && hours != 12){
		hours += 12;
	}
	printf("%02d:%02d\n", hours, minutes);
	return 0;
}
