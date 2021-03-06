#include <stdio.h>

#define MAXLINE 1000	// maximum input line size

int max;				// maximum length seen so far
char line[MAXLINE];		// current input line
char longest[MAXLINE];	// longest live saved here

int my_getline(void);
void copy(void);

// print longest input line; specialized version
int main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = my_getline()) > 0) {
		if (len > max) {
			max = len;
			copy();
		}
	}
	if (max > 0) { // there was a line
		printf("%s", longest);
	}
	return 0;
}

// my_getline: specialized version
int my_getline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE-1
			&& (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

// copy: specialized version
