#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int value;
	char str[30];

	// assigning value to variable str
	strcpy(str, "D");

	// converting string to integer and storing the integer value to variable value
	value = atoi(str);

	printf("String value = %s, Integer value = %d\n", str, value);

	return 0;
}

