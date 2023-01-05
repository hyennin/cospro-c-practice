#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];

	for (i = 1; i < strlen(src); i++) {
		dest[i] = dest[0] + src[i];
	}

	dest[i] = 0;

	return 0;
}

char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * strlen(string));
	
	func_a(encoded, string);

	return encoded;
}

void main() {
	char string[] = "12345";

	char* res = solution(string);

	printf("%s", res);
}