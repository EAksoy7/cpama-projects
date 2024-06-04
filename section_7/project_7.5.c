#include <stdio.h>
#include <ctype.h>

int main(void){

	char input;
	int score;

	printf("Enter a word: ");
	input = getchar();

	while(input != '\n'){
	
		input = toupper(input);
			
		switch(input){
			case 'A':
			case 'E':
			case 'I':
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
				score += 1;
				break;	
			case 'D':
			case 'G':
				score += 2;
				break;	
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				score += 3;
				break;	
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				score += 4;
				break;
			case 'K':
				score += 5;
				break;	
			case 'J':
			case 'X':
				score += 8;
				break;
			case 'Q':
			case 'Z':
				score += 10;
				break;
			default:
				printf("Input contains invalid character: %c\n", input);
				return 0;
		}

		input = getchar();	
		
	}
	
	printf("Scrabble value: %d\n", score);

	return 0;

}
