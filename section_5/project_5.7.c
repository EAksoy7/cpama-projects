#include <stdio.h>

int main(void){

	int i1, i2, i3, i4, largest = 0, smallest = 0;

	printf("Please enter 4 integers seperated by spaces: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	if (i1 < i2){
		largest = i2;
		smallest = i1;
	}
	else {
		largest = i1;
		smallest = i2;
	}

	if (i3 > largest){
		largest = i3;
	}
	else if (i3 < smallest){
		smallest = i3;
	}

	if (i4 > largest){
		largest = i4;
	}
	else if (i4 < smallest){
		smallest = i4;
	}

	printf("Largest: %d\nSmallest: %d\n", largest, smallest);
	return 0;
}
