#include <stdio.h>

int main(void){
	float ammount;
	
	printf("Please enter an ammount: ");
	scanf("%f", &ammount);
	printf("With tax added: $%.2f\n", ammount * 1.05);
	
	return 0;
}
