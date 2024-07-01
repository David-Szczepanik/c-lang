#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char s[],int lim) /* get line into s, return length */
{
	int ch, i;

	for (i = 0; i < lim - 1 && (ch = getchar()) != EOF && ch != '\n'; ++i)
		s[i] = ch;
	if (ch == '\n') {
		s[i] = ch;
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

void checkBlanks(char s3[], char cleanStr[]) {
	int i, j = 0;
	int spaceFlag = 0;

	for (i = 0; s3[i] != '\0'; i++) {
		if (s3[i] != ' ') {
			cleanStr[j++] = s3[i];
			spaceFlag = 0;
		}
		else if (spaceFlag == 0) {
			cleanStr[j++] = ' ';
			spaceFlag = 1;
		}
	}
}

int main() /* find longest line */
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */
	char save[MAXLINE]; /* longest line, saved */
	char cleanStr[MAXLINE] = "";

	while ((len = get_line(line, MAXLINE)) > 0) {
		copy(line, save);
		checkBlanks(save, cleanStr);
		printf("%s", cleanStr);
	}

	// if (max > 0){ /* there was a line */
	// 	printf("Lines: %s\n", cleanStr);
	// }
}
