#include <stdio.h>

int main(void){

	int n, odd, square;

	printf("This prorgam prints a table of squares.\n");
	printf("Enter the number of entries in the table.\n");
	scanf("%d", &n);

	odd = 3;
	square = 1;

	for(let i = 1; i <= n; i++){
		
		printf("%10d%10d\n", i, square);
		odd += 2;
		square += odd;
	
	}
	return 0;

}
