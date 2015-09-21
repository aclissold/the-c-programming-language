#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);

// Modification of misc/longest.c to print "length: line" for each line.
// length is the actual length of the input line and line is the input line
// truncated to MAXLINE characters. The last two characters are always "\n\0".
int main()
{
	int len;			   // current line length
	char line[MAXLINE];    // current input line

	while ((len = my_getline(line, MAXLINE)) > 0)
		if (len > 0) // there was a line
			printf("%d: %s", len, line);
	return 0;
}

// my_getline: read a line into s, return length
int my_getline(char s[], int lim)
{
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim)
			s[i] = c;

	if (i > 0 && i <= lim-2) {
		s[i] = '\n';
		s[i+1] = '\0';
	} else if (i > 0 && i > lim-2) {
		s[lim-2] = '\n';
		s[lim-1] = '\0';
	}

	return i;
}
