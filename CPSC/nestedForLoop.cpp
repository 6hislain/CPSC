/* in class example production control */

#include <stdio.h>

void main3() {
	int i, j, pass = 0, fail = 0;
	float diameter;

	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 5; j++) {
			printf("Enter the diameter for batch %d, component %d: ", i, j);
			scanf_s("%f", &diameter);
			getchar();

			if (diameter >= 9.8 && diameter <= 10.2) {
				printf("This item passes.\n");
				pass++;
			}
			else {
				printf("This item fails.\n");
				fail++;
			}
		}
		printf("\n\nYou have %d passing items and %d failing items\n", pass, fail);
	}
}