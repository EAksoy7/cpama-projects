#include <stdio.h>

#define NUM_LENGTH sizeof(number)/sizeof(number[0]) 

int main(void){

	char input, number[15];
	int i = 0;

	printf("Enter a phone number: ");
	
	while((input = getchar()) != '\n'){
		switch(input){
			case 'A':
			case 'B':
			case 'C':
				input = '2';	
				break;
			case 'D':
			case 'E':
			case 'F':
				input = '3';
				break;
			case 'G': 
			case 'H':
			case 'I':	
				input = '4';
				break;
			case 'J':
			case 'K':
			case 'L':
				input = '5';
				break;
			case 'M':
			case 'N':
			case 'O':
				input = '6';	
				break;
			case 'P':
			case 'R':
			case 'S':
				input = '7';
				break;
			case 'T': 
			case 'U':
			case 'V':	
				input = '8';
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				input = '9';
				break;
			default:
				break;
		}
	
		number[i] = input;
		i++;
	}

	
	printf("In numeric form: ");

	for(i = 0; i < NUM_LENGTH; i++){
		putchar(number[i]);
	}
	printf("\n");
	return 0;

}
