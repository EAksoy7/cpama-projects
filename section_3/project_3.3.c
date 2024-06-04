#include <stdio.h>

int main(void){

	int gs1, group, publisher, item_no, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item_no, &check_digit);
	printf("GS1 Prefix : %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group, publisher, item_no, check_digit);
	return 0;

}
