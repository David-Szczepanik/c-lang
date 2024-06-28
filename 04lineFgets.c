
#include <stdio.h>
int main(){
	char line[100];

	printf("Enter line\n");
	fgets(line, 100, stdin);

	printf("Line: %s\n", line);
}
