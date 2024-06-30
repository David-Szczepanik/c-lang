#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line size */
#define MINLINE 10 /* minimum input line size */


int get_line(char s[],int lim) /* get line into s, return length */
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return(i);
}

void copy(char s1[],char s2[]) /* copy s1 to s2; assume s2 big enough */
{
	int i = 0;

	while ((s2[i] = s1[i]) != '\0')
	++i;
}

void append(char longStr[], char lineAppend[])
{
	int i = strlen(longStr);
	int j;

	for (j = 0; lineAppend[j] != '\0'; ++j){
		longStr[i + j] = lineAppend[j];
	}
	longStr[i + j] = '\0';
}

int main() /* find longest line */
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char save[MAXLINE]; /* longest line, saved */
	char longStr[MAXLINE] = "";

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(line, save);
		}
		if (len > MINLINE)
			append(longStr, line);
	}

	if (max > 0){ /* there was a line */
		printf("\nLongest line: %s\n", save);
	}
	printf("Lines longer than 10 char: \n%s\n", longStr);
}
