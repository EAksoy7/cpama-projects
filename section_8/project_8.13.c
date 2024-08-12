#include <stdio.h>
#include <ctype.h>

int main(void){

	int counter = 0, i;
	char initial, input = ' ', last_name[20];

	printf("Enter a first and last name: ");

	while((initial = getchar()) == ' '){
		;
	}
	while(getchar() != ' '){
		
		continue;
	
	}

	while((input = getchar()) == ' '){
		;	
	}
	while(input != ' ' && input != '\n'){
	
		last_name[counter++] = input;
		input = getchar();
	
	}
	printf("You entered the name: ");
	for(i = 0; i <= counter; i++){
		printf("%c", last_name[i]);
	}
	printf(", %c.\n", initial);
	return 0;

}
