#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20

float fahr(float celius);
float celsius(float fahr);

/* functions for Fahrenheit-Celsius temperature conversion */
int main(void)
{
    int temp;

    printf(" °F\t    °C\t    °F (check)\n");
    printf("----------------------\n");
    for (temp = LOWER; temp <= UPPER; temp += STEP) {
	  printf("%3d\t%6.1f\t%6.f\n", temp, celsius(temp), fahr(celsius(temp)));
    }

    return 0;
}

/* fahr: Celsius-to-Fahrenheit conversion */
float fahr(float celsius)
{
    return (9.0/5.0)*celsius + 32;
}

/* celsius: Fahrenheit-to-Celsius conversion */
float celsius(float fahr)
{
    return (5.0/9.0)*(fahr-32);
}
