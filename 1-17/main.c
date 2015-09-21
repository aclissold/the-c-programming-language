#include <stdio.h>

#define MAX 80

// print all input lines longer than MAX characters, truncated to MAX characters
int main()
{
	char buffer[MAX];
	int i;
	char c = '\0';
	while (c != EOF) {
		for (i = 0; (c = getchar()) != '\n' && (c != EOF)  && i <= MAX; ++i) {
			buffer[i] = c;
		}
		if (i > MAX) {
			for (i = 0; i < MAX; ++i) {
				putchar(buffer[i]);
			}
			putchar('\n');
		}
	}

	return 0;
}

// **************************************************************************79
// ***************************************************************************80
// ****************************************************************************81
// *****************************************************************************82
