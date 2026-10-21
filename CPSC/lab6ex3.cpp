#include <stdio.h>

#pragma warning(disable: 4996)

void main63() {
	int unitsFrom, unitsTo;
	float temp, answer;

	printf("Temperature Conversion Utility\n\n");
	printf("\t1) Celsius\n");
	printf("\t2) Fahrenheit\n");
	printf("\t3) Kelvin\n");
	printf("\t4) Rankine\n");

	printf("\nEnter the temperature UNITS you want to convert FROM (1-4): ");
	scanf("%d", &unitsFrom);
	getchar();

	if (unitsFrom < 1 || unitsFrom > 4) {
		printf("\nYou didn't select a temperature to convert FROM!\n");
		return;
	}

	printf("\nEnter the temperature value: ");
	scanf("%f", &temp);
	getchar();

	printf("\nEnter the temperature UNITS you want to convert TO (1-4): ");
	scanf("%d", &unitsTo);
	getchar();

	if (unitsTo < 1 || unitsTo > 4) {
		printf("\nYou didn't select a temperature to convert TO!\n");
		return;
	}

	if (unitsFrom == unitsTo)
		answer = temp;

	// celcius
	else if (unitsFrom == 1 && unitsTo == 2)
		answer = (temp * 1.8) + 32;
	else if (unitsFrom == 1 && unitsTo == 3)
		answer = temp + 273.15;
	else if (unitsFrom == 1 && unitsTo == 4)
		answer = (temp * 1.8) + 32 + 459.67;

	// fahrenheit
	else if (unitsFrom == 2 && unitsTo == 1)
		answer = (temp - 32) / 1.8;
	else if (unitsFrom == 2 && unitsTo == 3)
		answer = (temp + 459.67) / 1.8;
	else if (unitsFrom == 2 && unitsTo == 4)
		answer = temp + 459.67;

	// kelvin
	else if (unitsFrom == 3 && unitsTo == 1)
		answer = temp - 273.15;
	else if (unitsFrom == 3 && unitsTo == 2)
		answer = (temp * 1.8) - 459.67;
	else if (unitsFrom == 3 && unitsTo == 4)
		answer = temp * 1.8;

	// rankine
	else if (unitsFrom == 4 && unitsTo == 1)
		answer = (temp - 32 - 459.57) / 1.8;
	else if (unitsFrom == 4 && unitsTo == 2)
		answer = temp - 459.67;
	else if (unitsFrom == 4 && unitsTo == 3)
		answer = temp / 1.8;

	printf("\nThe temperature is %0.2f ", answer);

	switch (unitsTo) {
	case 1:
		printf("Celsius.\n");
		break;
	case 2:
		printf("Fahrenheit.\n");
		break;
	case 3:
		printf("Kelvin.\n");
		break;
	case 4:
		printf("Rankine.\n");
		break;
	}
}