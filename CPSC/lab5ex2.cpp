/*
Name:
Lab: 5, exercise 2
Purpose: format output with printf
*/

#include <stdio.h>

#pragma warning(disable: 4996)

void main52() {
	// declare variables
	float num1, num2;
	int num3, num4;

	// get user inputs
	printf("Enter the 1st float: ");
	scanf("%f", &num1);
	getchar();

	printf("Enter the 2nd float: ");
	scanf("%f", &num2);
	getchar();

	printf("Enter the 1st integer: ");
	scanf("%d", &num3);
	getchar();

	printf("Enter the 2nd integer: ");
	scanf("%d", &num4);
	getchar();

	// draw table with proper formatting
	printf("\n\n%8s |%12s |%12s |%12s", "Float", "Basic", "0.00", "+0.0000");
	printf("\n--------------------------------------------------");
	printf("\n%8s |%12.6f |%12.2f |%+12.4f", "1st", num1, num1, num1);
	printf("\n%8s |%12.6f |%12.2f |%+12.4f", "2nd", num2, num2, num2);

	printf("\n\n%8s |%12s |%12s |%12s", "Int", "Basic", "000xx", "+000xx");
	printf("\n--------------------------------------------------");
	printf("\n%8s |%12d |%12.5d |%+12.5d", "1st", num3, num3, num3);
	printf("\n%8s |%12d |%12.5d |%+12.5d\n", "2nd", num4, num4, num4);
}