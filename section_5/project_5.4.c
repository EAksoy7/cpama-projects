#include <stdio.h>

int main(void){

	int windspeed;

	printf("Please enter the windspeed in knots: ");
	scanf("%d", &windspeed);

	if(windspeed < 1){
		printf("Calm\n");
	}	
	else if(windspeed < 4){
		printf("Light air\n");
	}
	else if(windspeed < 28){
		printf("Breeze\n");
	}
	else if(windspeed < 48){
		printf("Gale\n");
	}
	else if(windspeed < 64){
		printf("Storm\n");
	}
	else{
		printf("Hurricane\n");
	}
	return 0;
}
