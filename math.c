#include <stdio.h>

int main(void)
{
	double initial, step, stop, conv;

	do {
		printf("Initial: ");
		scanf("%lf", &initial);
		if (initial < 0) {
			printf("It must be greater than 0\n");
		}
	}while (initial < 0);
	do {
		printf("Step: ");
		scanf("%lf", &step);
		if (step < 0) {
			printf("It must be greater than 0\n");
		}
	} while(step < 0);
	do {
		printf("Stop: ");
		scanf("%lf", &stop);
		if (stop < 0) {
			printf("It must be greater than 0\n");
		}
	} while(stop < 0);

	printf("Meters   Feet\n");
	printf("******   ****\n");
	for (conv = initial; conv <= stop; conv += step) {
		printf("%6.2lf%7.2lf\n", conv, conv * 3.28084);
	}
	printf("\n");
	return 0;
}
