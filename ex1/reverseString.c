#include <stdio.h>
#include <string.h>

int main(){
	char str1[100] = "Reverse1";
	printf("%s\n",str1);

	int length = strlen(str1);

	for (int i = length; i >= 0; i--) {
		printf("%c",str1[i]);
	}
	printf("\n");
}
