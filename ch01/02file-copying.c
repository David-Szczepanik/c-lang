#include <stdio.h>

/*get a character
 while (character is not end file signal)
     output the character just read
     get a new character */

/* int main() // copy input to output; 1st version
{
	int c;
	c = getchar();

	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
} */

int main() /* copy input to output; 2nd version */
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
