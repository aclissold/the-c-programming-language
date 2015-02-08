#include <stdio.h>
#include <stdbool.h>

#define IN 1
#define OUT 0

bool is_whitespace(int c) {
    return c == ' ' || c == '\n' || c == '\t';
}

/* print each word of input on its own line */
int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (is_whitespace(c) && state == IN) {
            state = OUT;
            putchar('\n');
        } else if (!is_whitespace(c) && state == OUT) {
            state = IN;
            putchar(c);
        } else if (state == IN) {
            putchar(c);
        }
    }

    return 0;
}
