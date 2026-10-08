/*
Name:
Lab: 5, exercise 3
Purpose: use the "math.h" library
*/

#include <stdio.h>
#include "math.h"

#pragma warning(disable: 4996)

void main53() {
	// declare variables
	float number, ceiled, floored, squared, root;

	// get user input
	printf("Please enter a real number: ");
	scanf("%f", &number);
	getchar();

	// do math
	ceiled = ceil(number);
	floored = floor(number);
	squared = pow(number, 2);
	root = sqrt(number);

	// print results
	printf("\n%12s %12s %12s %18s", "Ceil", "Floor", "Squared", "Square Rooted");
	printf("\n%12.0f %12.0f %12.2f %18.2f\n", ceiled, floored, squared, root);
}