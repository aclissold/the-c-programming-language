#include <stdio.h>

/* count blanks, tabs, and newlines */
int main() {
    int c;
    int b = 0, t = 0, nl = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                ++b;
                break;
            case '\t':
                ++t;
                break;
            case '\n':
                ++nl;
                break;
            default:
                break;
        }
    }

    printf("Blanks:\t\t%d\n", b);
    printf("Tabs:\t\t%d\n", t);
    printf("Newlines:\t%d\n", nl);

    return 0;
}
