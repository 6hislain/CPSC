#include <stdio.h>

#pragma warning(disable: 4996)

void main2() {
	int parktype, age;
	float cost, discount;

	printf("Choose your parking type:\n");
	printf("1. one hour parking $3\n");
	printf("2. weekday parking full day $12\n");
	printf("3. evening parking $6\n");
	printf("4. weekend parking $8\n");

	printf("\nEnter your choice: ");
	scanf("%d", &parktype);
	getchar();

	printf("please enter your age: ");
	scanf("%d", &age);
	getchar();

	switch (parktype) {
	case 1:
		cost = 3;
		break;
	case 2:
		cost = 12;
		break;
	case 3:
		cost = 6;
		break;
	case 4:
		cost = 8;
		break;
	default:
		printf("Invalid choice");
	}

	if (age >= 65)
		discount = 0.2;
	else if (age <= 22)
		discount = 0.3;
	else
		discount = 0;

	cost = cost * (1 - discount);

	printf("\nYour total cost of parking is $%0.2f\n", cost);
}