#include <stdio.h>

int main(void){
	float loan, interest_rate, monthly_payment;
	int payments;


	printf("Please enter the loan amount: ");
	scanf("%f", &loan);
	printf("Please enter the interest rate(percentage): ");
	scanf("%f", &interest_rate);
	printf("Please enter the monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Please enter the number of payments: ");
	scanf("%d", &payments);

	interest_rate = (interest_rate / 100) / 12;

	for (int i = 0; i < payments; i++){

		if(loan < 0){
			printf("Loan will be fully repaid after %d payments\n", i-1);
			return 0;
		}

		loan -= monthly_payment;
		loan += loan * interest_rate;

	}	

	
	printf("Balance remaining after %d payments: %.2f\n", payments, loan);

	return 0;
}
