#include <stdio.h>

int main(void){

	int income;
	float tax;

	printf("Please enter you taxable income: ");
	scanf("%d", &income);

	if (income < 750){
		tax = income * 0.01;
	}
	else if(income < 2250){
		tax = 7.50f + (income - 750) * 0.02;
	}
	else if(income < 3750){
		tax = 37.50f + (income - 2250) * 0.03;
	}
	else if(income < 5250){
		tax = 82.50f + (income - 3750) * 0.04;
	}
	else if(income < 7000){
		tax = 142.50f + (income - 5250) * 0.05;
	}
	else {
		tax = 230.00f + (income - 7000) * 0.06;
	}

	printf("The amount of tax due is: $%.2f\n", tax);

	return 0;
}
