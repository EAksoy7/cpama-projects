#include <stdio.h>
#include <ctype.h>

int main(void){

	int input, score = 0, values[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,5,8,4,10,};

	printf("Enter a word: ");

	while((input = toupper(getchar())) != '\n'){

		input -= 'A';

		score += values[input];

	}
	
	printf("Scrabble value: %d\n", score);

	return 0;

}
