#include <stdio.h>

int main(void){

	int y1, y2, m1, m2, d1, d2;

	printf("Please enter first date (dd/mm/yy): ");
	scanf("%2d/%2d/%2d", &d1, &m1, &y1);
	printf("Please enter second date (dd/mm/yy): ");
	scanf("%2d/%2d/%2d", &d2, &m2, &y2);

	if (y1 < y2){
		printf("The first date is earlier than the second date.\n");
	}
	else if (y1 > y2){
		printf("The second date is earlier than the first date.\n");	
	}
	else{

		if (m1 < m2){
			printf("The first date is earlier than the second date.\n");
		}
		else if(m1 > m2){
			printf("The second date is earlier than the first date.\n");
		}
		else{
			if(d1 < d2){
				printf("The first date is earlier than the second date.\n");
			}
			else if(d1 > d2){
				printf("The second date is earlier than the first date.\n");
			}
			else{
				printf("They are the same date.\n");
			}
		}

	}
	return 0;
}
