#include <stdio.h>

int main(void){

	float radius;

	printf("Please enter the radius of the sphere: ");
	scanf("%f", &radius);

	printf("Volume = %.2f\n", (4.0f / 3.0f) * 3.141 * (radius * radius * radius) );
}
