#include <stdio.h>

int main(void){

	int shares;
	float price_per_share, commission, value, rival_commission;

	printf("Please enter the number of shares and the price per share, seperated by a space: ");
	scanf("%d %f", &shares, &price_per_share);

	value = shares * price_per_share;
	
	if (shares < 2000){
		rival_commission = 33 + shares * 0.03;
	}
	else {
		rival_commission = 33 + shares *0.02;
	}


	if(value < 2500.00f){
		commission =  30.00f + 0.017f * value;
	}
	else if(value < 6250.00f){
		commission = 56.00f + 0.0066f * value;
	}
	else if(value < 20000.00f){
		commission = 76.00f + 0.0034f * value;
	}
	else if(value < 50000.00f){
		commission = 100.00f + 0.0022f * value;
	}
	else if(value < 500000.00f){
		commission = 155.00f + 0.0011f * value;
	}
	else {
		commission = 255.00f + 0.0009f * value;
	}
	if (commission < 39.00f){
		commission = 39.00f;
	}

	
	printf("Commission = $%.2f\nRival Commission = $%.2f\n", commission, rival_commission);
	return 0;

}
