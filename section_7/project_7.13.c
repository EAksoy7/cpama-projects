#include <stdio.h>

int main(void){

	int num_words = 0;
	float avg = 0.0f; 
	char input;

	printf("Enter a sentence: ");
	while((input = getchar()) != '\n'){

		if(input == ' '){
			num_words++;
		}
		else{
			avg++;
		}

	}
	num_words++;
	avg /= num_words;
	
	printf("Average word length: %.2g\n", avg);
	return 0;		


}
