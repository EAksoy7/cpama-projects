#include <stdio.h>
#include <ctype.h>

int main(void){

	char input;
	int vowels = 0;
	
	printf("Enter a sentence: ");
		
	while((input = getchar()) != '\n'){
		
		input = toupper(input);
	
		if(input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U'){
			vowels++;
		}
	}

	printf("The number of vowels in the sentence is: %d\n", vowels);
	return 0;	

}
