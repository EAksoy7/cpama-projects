#include <stdio.h>
#include <stdlib.h>

#define NO_TIMES ((int) sizeof(departures) / sizeof(departures[0])) 

int main(void){

	int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305}, arrivals[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};	
	int hours, minutes, mtime;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	mtime = hours * 60 + minutes;

	for(int i = 0; i <= NO_TIMES; i++){
	
		if (abs(mtime - (departures[i])) < abs(mtime - (departures[i + 1]))){
			if(departures[i] >= 720 && departures[i] < 780){
				printf("Closest departure time is %d:%.2d P.M., arriving at %d:%.2d P.M.\n", 
				departures[i] / 60, departures[i] % 60, arrivals[i] / 60 % 12, arrivals[i] % 60);
			}	
			else if(departures[i] >= 780){
				printf("Closest departure time is %d:%.2d P.M., arriving at %d:%.2d P.M.\n", 
				departures[i] / 60 % 12, departures[i] % 60, arrivals[i] / 60 % 12, arrivals[i] % 60);
			}
			else{
				printf("Closest departure time is %d:%.2d A.M., arriving at %d:%.2d A.M.\n", 
				departures[i] / 60, departures[i] % 60, arrivals[i] / 60 % 12, arrivals[i] % 60);	
			}	
			break;	
		}
	}

	return 0;

}
