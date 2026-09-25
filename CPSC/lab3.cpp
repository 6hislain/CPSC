/* 
Name: 
Group:
Date: 9/24/2026
Lab: 3, exercise 1

Purpose: To create a template for future labs
*/

#include <stdio.h>

void main3() {
	float sum, num1, num2;

	printf("Hello world!!");
	printf("\nPress enter to continue...\n\n");
	getchar();

	printf("Please enter a number: ");
	scanf_s("%f", &num1);
	getchar();

	printf("Please enter another number: ");
	scanf_s("%f", &num2);

	sum = num1 + num2;
	
	printf("\n\nThe sum of the two numbers is %0.2f.", sum);
	printf("\nPress enter to continue...");
	getchar();
}