#include <stdio.h>

/* prints Celius-Fahrenheit table
    for fahr = 0, 10, ..., 160 */
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;      /* lower limit of temperature table */
	upper = 160;    /* upper limit */
	step = 10;      /* step size */

	printf(" °C\t    °F\n");
	printf("--------------\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0)*celsius + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
