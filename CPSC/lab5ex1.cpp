/*
Name:
Lab: 5, exercise 1
Purpose: get different input types from user
*/

#include <stdio.h>

#pragma warning(disable: 4996)

void main51() {
	// declare variables
	char myClass;
	int age;
	float grade;

	// get user class
	printf("Please enter your class (A-N): ");
	scanf("%c", &myClass);
	getchar();

	// get user age
	printf("Please enter your age: ");
	scanf("%i", &age);
	getchar();

	// get user grade
	printf("Please predict your final grade in CPSC 1240(%): ");
	scanf("%f", &grade);
	getchar();

	// print results
	printf("\nI am a %d year old student in class %c with a goal of achieving %.2f%% in CPSC 1240.\n", age, myClass, grade);
}