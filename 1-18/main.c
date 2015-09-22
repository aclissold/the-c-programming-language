#include <stdio.h>
#include <stdlib.h>

static const int MAX = 1000;

int my_getline(char s[], int lim);

// remove trailing blanks and tabs and delete blank lines
int main()
{
	int len = 0;
	char line[MAX];

	while ((len = my_getline(line, MAX)) != 0) {
		if (line[0] == '\n') {
			continue;
		}

		while(len > 0 &&
				(line[len-1] == ' ' ||
				line[len-1] == '\t')) {
			line[--len] = '\0';
		}
		line[len] = '\n';
		printf("%s", line);
	}

	return 0;
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

// 3 trailing spaces:   
// 2 trailing tabs:		
// 3 of each: 	 	 	
