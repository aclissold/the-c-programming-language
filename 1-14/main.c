#include <stdio.h>

#define MAX 1<<7

/* print a histogram of character counts */
int main(void)
{
    int c, i;
    int counts[MAX];

    for (i = 0; i < MAX; ++i)
        counts[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= MAX) {
            fprintf(stderr, "fatal: encountered non-ASCII character\n");
            return 1;
        }
        ++counts[c];
    }

    for (i = 0; i < MAX; ++i) {
        if (counts[i] == 0) {
            continue;
        }

        if (i == '\t') {
            printf("\\t");
        } else if (i == '\n') {
            printf("\\n");
        } else {
            putchar(i);
            putchar(' ');
        }

        printf(" | ");

        int j;
        for (j = 0; j < counts[i]; ++j)
            printf("•");
        putchar('\n');
    }

    return 0;
}
