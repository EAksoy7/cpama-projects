#include <stdio.h>

int main(void){
	float loan, interest_rate, monthly_payment;

	printf("Please enter the loan amount: ");
	scanf("%f", &loan);
	printf("Please enter the interest rate(percentage): ");
	scanf("%f", &interest_rate);
	printf("Please enter the monthly payment: ");
	scanf("%f", &monthly_payment);

	interest_rate = (interest_rate / 100) / 12;
	loan -= monthly_payment;
	loan += loan * interest_rate;
	printf("Balance remaining after first payment: %.2f\n", loan);
	loan -= monthly_payment;
	loan += loan * interest_rate;
	printf("Balance remaining after second payment: %.2f\n", loan);
	loan -= monthly_payment;
	loan += loan * interest_rate;
	printf("Balance remaining after third payment: %.2f\n", loan);

	return 0;
}
