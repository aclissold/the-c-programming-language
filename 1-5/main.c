#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20

/* print Fahrenheit-Celius table, albeit shorter than 1-3 */
int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
	  printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}
