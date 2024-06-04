#include <stdio.h>

int main(void){

	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Please enter the number of entries in the table: ");
	scanf("%d", &n);
	getchar();
	
	for (i = 1; i <= n; i++){
		
		printf("%10d%10d\n", i, i * i);
	
		if(i % 24 == 0){
			printf("Press enter to continue....\n");
			
			while(getchar() != '\n')
				;
		}
	}
	return 0;

}