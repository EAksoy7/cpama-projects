#include <stdio.h>
#include <ctype.h>

int main(void){

	char initial, input = ' ';

	printf("Enter a first and last name: ");
	initial = getchar();	

	while(initial == ' '){

		initial = getchar();	

	}
	while(getchar() != ' '){
		
		continue;
	
	}

	while(input == ' '){
	
		input = getchar();
	
	}
	while(input != ' ' && input != '\n'){
		
		printf("%c", input);
		input = getchar();

	
	}
	printf(", %c.\n", initial);
	return 0;

}
