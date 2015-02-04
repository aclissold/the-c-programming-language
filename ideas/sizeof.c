#include <stdio.h>

/* comparing modern-day integer sizes to those in text from 1988 */

int main()
{
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(long));

    return 0;
}
