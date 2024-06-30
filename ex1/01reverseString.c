#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
	int len = strlen(str);
	int i, j;
	for (i = 0, j = len - 1; i < j; i++, j--) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

void reversePrint(char str[]){
	int length = strlen(str);

	for (int i = length -1; i >= 0; i--) {
		printf("%c",str[i]);
	}
	printf("\n");
}

int main(){
	char str[100] = "Reverse1";
	printf("%s\n", str);

	reversePrint(str);

	reverseStr(str);
	printf("%s\n", str);
}

