#include <stdio.h>

int main(void){

	int input;

	printf("Please enter a number to find all even squares up to the input: ");
	scanf("%d", &input);

	for(int i = 1; i * i <= input; i++){
	
		if ((i * i) % 2 == 0){
			printf("%d%10d\n", i, i * i);
		}
		else {
			continue;
		}

	}
	
	return 0;

}
