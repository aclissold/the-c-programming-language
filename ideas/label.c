#include <stdio.h>

/* emulate a for-loop using a label */
int main()
{
    int i    = 0;
    int step = 20;
    int max  = 300;

loop:
    printf("%d\n", i);
    i += step;
    if (i <= max)
        goto loop;

    return 0;
}
