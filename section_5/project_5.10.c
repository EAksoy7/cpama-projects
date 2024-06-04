#include <stdio.h>

int main(void){

	int grade_tens, grade;

	printf("Please enter your numerical grade: ");
	scanf("%d", &grade);

	grade_tens = grade / 10;

	switch(grade_tens){

	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("F\n");
		break;
	case 6:
		printf("D\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 9:
	case 10:
		printf("A\n");
		break;
	default:
		printf("Invalid value\n");
		break;
	}
	return 0;
}
