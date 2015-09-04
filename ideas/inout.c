#include <stdio.h>

void addOne(int *x);

/* trying out an inout variable */
int main()
{
	int x = 0;
	printf("before: %d\n", x);
	addOne(&x);
	printf("after: %d\n", x);
}

/* increment the value of x by 1 */
void addOne(int *x) {
	++*x;
}
