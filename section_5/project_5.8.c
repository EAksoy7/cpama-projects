#include <stdio.h>
#include <stdlib.h>

int main(void){

	int hours, minutes, mtime;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	mtime = hours * 60 + minutes;

	if (abs(mtime - (8 * 60)) < abs(mtime - (9 * 60 + 43))){
		printf("Closest departure time is 8:00 A.M., arriving at 10:16 A.M.\n");
	}
	else if (abs(mtime - (9 * 60 + 43)) < abs(mtime - (11 * 60 + 19))){
		printf("Closest departure time is 9:43 A.M., arriving at 11:52 A.M.\n");
	}
	else if (abs(mtime - (11 * 60 + 19)) < abs(mtime - (12 * 60 + 47))){
		printf("Closest departure time is 11:19 A.M., arriving at 1:31 P.M.\n");
	}
	else if (abs(mtime - (12 * 60 + 47)) < abs(mtime - (14 * 60))){
		printf("Closest departure time is 12:47 P.M., arriving at 3:00 P.M.\n");
	}
	else if (abs(mtime - (14 * 60)) < abs(mtime - (15 * 60 + 45))){
		printf("Closest departure time is 2:00 P.M., arriving at 4:08 P.M.\n");	
	}
	else if (abs(mtime - (15 * 60 + 45)) < abs(mtime - (19 * 60))){
		printf("Closest departure time is 3:45 P.M., arriving at 5:55 P.M.\n");
	}
	else if (abs(mtime - (19 * 60)) < abs(mtime - (21 * 60 + 45))){
		printf("Closest departure time is 7:00 P.M., arriving at 9:20 P.M.\n");
	}
	else {
		printf("Closest departure time is 9:45 P.M., arriving at 11:58 P.M.\n");
	}
	return 0;
}