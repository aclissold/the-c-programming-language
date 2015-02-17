#include <stdio.h>

#define MAX 1<<7

/* print all visible ASCII characters */
int main()
{
    int c;
    for (c = 33; c < MAX; ++c)
        printf("%c", c);
    putchar('\n');

    return 0;
}
