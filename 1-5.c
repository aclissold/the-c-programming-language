#include <stdio.h>

/* print Fahrenheit-Celius table, albeit shorter than 1-3 */
int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
	  printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    return 0;
}
