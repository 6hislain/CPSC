// 
// Lab #4
// Calculate the sum, difference, product, quotient, and modulus of 2 integer numbers

#include <stdio.h>

#pragma warning(disable: 4996)

void main4() {
	int num1, num2, sum, difference, product, quotient, modulus;

	printf("Please enter your first number:\t ");
	flushall();
	scanf("%d", &num1);

	printf("Please enter your second number: ");
	flushall();
	scanf("%d", &num2);

	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	modulus = num1 % num2;

	printf("\nThe sum of the two numbers is:\t\t %d", sum);
	printf("\nThe difference of the two numbers is:\t %d", difference);
	printf("\nThe product of the two numbers is:\t %d", product);
	printf("\nThe quotient of the two numbers is:\t %d", quotient);
	printf("\nThe modulus of the two numbers is:\t %d", modulus);
	printf("\n\nPress enter to end the program.");

	flushall();
	getchar();
}