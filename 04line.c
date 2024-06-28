#include <stdio.h>
int main(){
	char line[100];

	printf("Enter line\n");
	// printf("Enter line: ");
	scanf("%[^\n]100s", line);
	// scanf("%99[^\n]", line);

	printf("Line: %s\n", line);
}
