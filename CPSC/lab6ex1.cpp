/*
Name:
Lab: 6, exercise 1
Purpose: if, else if, else statements
*/

#include <stdio.h>

#pragma warning(disable: 4996)

void main61() {
	int choice;
	float price, change;

	printf("Select a candy from the list below:\n\n");
	printf("\t1 = Smarties ($0.50)\n");
	printf("\t2 = M&M's ($0.75)\n");

	printf("\nSelection? ");
	scanf("%d", &choice);
	getchar();

	printf("How are you going to pay for these ");

	if (choice == 1) {
		printf("Smarties\n\n");
		price = 0.5;
	}
	else if (choice == 2) {
		printf("M&M's\n\n");
		price = 0.75;
	}

	printf("\t1 = Loonie\n");
	printf("\t2 = Toonie\n");

	printf("\nSelection? ");
	scanf("%d", &choice);
	getchar();

	if (choice == 1)
		change = 1 - price;
	else if (choice == 2)
		change = 2 - price;

	printf("You will get the following change: $ %0.2f\n", change);
}