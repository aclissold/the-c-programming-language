#include <stdio.h>

/* copy input to output replacing multiple blanks with a single one */
int main()
{
    int c;
    int prev = -1;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || prev != ' ') {
            putchar(c);
        }
        prev = c;
    }

    return 0;
}
