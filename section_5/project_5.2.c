#include <stdio.h>

int main(void){

	int hours, minutes, meridiem;

	printf("Please enter 24 hour time to convert it to 12 hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
	if (hours < 12){
		if (hours == 0){
			printf("12:%.2d AM\n", minutes);
		}
		else{
			printf("%.2d:%.2d AM\n", hours, minutes);
		}
	}
	else {
		if (hours == 12){
			printf("%.2d:%.2d PM\n", hours, minutes);
		}
		else{
			printf("%.2d:%.2d PM\n", hours - 12, minutes);
		}	
	}
	return 0;
}
