/*
Name:
Lab: 7, exercise 1
Purpose: While Loops
*/

#include <stdio.h>

#pragma warning(disable: 4996)

void main71() {
	int number, entries = 0, lowest = 0;

	// get 1st number
	printf("Enter your first number (0 to end): ");
	scanf("%d", &number);
	getchar();

	while (number != 0) {
		// get the next number
		printf("Enter the next number (0 to end): ");
		scanf("%d", &number);
		getchar();

		// count entries
		entries++;

		// keep lowest number
		if (number < lowest) lowest = number;
	}
	printf("\nThe lowest number entered was %d, out of a total of %d entries.\n", lowest, entries);
}