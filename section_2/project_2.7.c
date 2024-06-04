#include <stdio.h>

int main(void){
	int amount, twenties, tens, fives, ones;
	printf("Please enter an amount: ");
	scanf("%d", &amount);

	twenties = amount / 20;
	amount -= twenties * 20;
	tens = amount / 10;
	amount -= tens * 10;
	fives = amount / 5;
	amount -= fives * 5;
	ones = amount;

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, ones);  	

	return 0;
}
