/*
Name:
Lab: 5, exercise 4
Purpose:
*/

#include <stdio.h>
#include "math.h"

#pragma warning(disable: 4996)

void main54() {
	// declare variables
	float pressure1, pressure2, q1, q2, v1;
	
	// get user inputs
	printf("Enter the differential pressure reading from FT-101 (inches of water): ");
	scanf("%f", &pressure1);
	getchar();

	printf("Enter the differential pressure reading from FT-102 (inches of water): ");
	scanf("%f", &pressure2);
	getchar();

	// do some calculations
	q1 = 56.57 * sqrt(pressure1);
	q2 = 48.99 * sqrt(pressure2);
	v1 = (fabsf(q2 - q1) / 875.0) * 100;

	// display results
	printf("\n%12s %16s %16s", "FT-101", "FT-102", "V-101");
	printf("\n%12.2f LPM %12.2f LPM %12.2f %% \n", q1, q2, v1);
}