/*
* Name:
* Lab: 4, exercise 2
* Purpose: find average, product, sum of 3 integers
*/

#include <stdio.h>

#pragma warning(disable: 4996)

void main42() {
	int num1, num2, num3, sum, product;
	float average;

	printf("Please enter the first integer: ");
	scanf("%d", &num1);
	getchar();

	printf("Please enter the second integer: ");
	scanf("%d", &num2);
	getchar();

	printf("Please enter the third integer: ");
	scanf("%d", &num3);
	getchar();

	sum = num1 + num2 + num3;
	product = num1 * num2 * num3;
	average = sum / 3;

	printf("\nThe sum of the three numbers is: %d", sum);
	printf("\nThe product of the three numbers is: %d", product);
	printf("\nThe average of the three numbers is: %.2f", average);
}