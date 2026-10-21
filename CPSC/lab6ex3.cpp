#include <stdio.h>

#pragma warning(disable: 4996)

void main() {
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

	printf("\nEnter the temperature value: ");
	scanf("%f", &temp);
	getchar();

	printf("\nEnter the temperature UNITS you want to convert TO (1-4): ");
	scanf("%d", &unitsTo);
	getchar();

	if (unitsTo == unitsFrom)
		answer = temp;

	// celcius
	if (unitsTo == 1 && unitsFrom == 2)
		answer = temp * 1.8 + 32;
	if (unitsTo == 1 && unitsFrom == 3)
		answer = temp + 273.15;
	if (unitsTo == 1 && unitsFrom == 4)
		answer = temp * 1.8 + 32 + 459.67;

	// fahrenheit
	if (unitsTo == 2 && unitsFrom == 1)
		answer = (temp - 32) / 1.8;
	if (unitsTo == 2 && unitsFrom == 3)
		answer = (temp + 459.67) / 1.8;
	if (unitsTo == 2 && unitsFrom == 4)
		answer = temp + 459.67;

	// kelvin
	if (unitsTo == 3 && unitsFrom == 1)
		answer = temp - 273.15;
	if (unitsTo == 3 && unitsFrom == 2)
		answer = temp * 1.8 - 459.67;
	if (unitsTo == 3 && unitsFrom == 4)
		answer = temp * 1.8;

	// rankine
	if (unitsTo == 4 && unitsFrom == 1)
		answer = (temp - 32 - 459.57) / 1.8;
	if (unitsTo == 4 && unitsFrom == 2)
		answer = temp - 459.67;
	if (unitsTo == 4 && unitsFrom == 3)
		answer = temp / 1.8;
}