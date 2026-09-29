/*
* Name: 
* Lab: 4, exercise 1
* Purpose: Calculate the number of dozens and remaining from a given number of eggs
*/

#include <stdio.h>

#pragma warning(disable: 4996)

void main41() {
	int eggs, dozens, remaining;

	printf("Please enter the number of eggs: ");
	scanf("%d", &eggs);
	getchar();

	dozens = eggs / 12;
	remaining = eggs % 12;

	printf("\nThe number of dozens is: %d", dozens);
	printf("\nThe number of remaining eggs is: %d", remaining);
}