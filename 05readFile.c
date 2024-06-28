#include <stdio.h>
int main(){
	char line[100];
	FILE *hand;
	hand = fopen("romeo.txt", "r");

	while(fgets(line, 100, hand) != NULL){
		printf("%s", line);
	}
}
