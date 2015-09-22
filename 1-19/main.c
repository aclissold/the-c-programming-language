#include <stdio.h>
#include <string.h>

static const int MAX = 1000;

void reverse(char s[]);
int my_getline(char s[], int lim);

// use reverse(s) to reverse input line by line
int main()
{
	int len = 0;
	char line[MAX];

	while ((len = my_getline(line, MAX)) != 0) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

// reverse: reverse the contents of s
void reverse(char s[])
{
	int len = strlen(s);
	for (int i = 0; i < len/2; ++i) {
		char c = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = c;
	}
}

// my_getline: read a line into s, return length
int my_getline(char s[], int lim)
{
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim) {
			s[i] = c;
		}
	}

	if (i > 0 && i <= lim-2) {
		s[i] = '\n';
		s[i+1] = '\0';
	} else if (i > 0 && i > lim-2) {
		s[lim-2] = '\n';
		s[lim-1] = '\0';
	} else if (i == 0 && c == '\n') {
		++i;
		s[0] = '\n';
		s[1] = '\0';
	}

	return i;
}

