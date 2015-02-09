#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0
#define MAX 100

/* print a histogram of word lengths */
int main(void)
{
    int c, n, i, state;
    int lengths[MAX];

    for (i = 0; i < MAX; ++i)
        lengths[i] = 0;

    n = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (n != 0) {
                ++lengths[n];
                n = 0;
            }
        } else if (state == OUT) {
            state = IN;
            ++n;
        } else if (state == IN) {
            ++n;
        }

        if (n > MAX) {
            fprintf(stderr, "encountered word over %d characters\n", MAX);
            return 1;
        }
    }

    for (i = 0; i < MAX; ++i)
        if (lengths[i] > 0) {
            printf("%d", i);
            if (i < 10) {
                putchar(' ');
            }
            printf(" | ");

            int j;
            for (j = 0; j < lengths[i]; ++j)
                printf("•");
            putchar('\n');
        }

    return 0;
}
