#include <stdio.h>

#pragma warning(disable : 4996)

void main1() {
	float coffee, price, total;

	printf("Enter the number of coffee cups: ");
	scanf("%f", &coffee);

	printf("Enter the price of one cup of coffee: ");
	scanf("%f", &price);

	total = coffee * price * (1.05);
	printf("Total price + 5%% GST tax: %.2f\n", total);
}