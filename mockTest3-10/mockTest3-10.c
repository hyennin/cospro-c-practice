#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(const char* strings[], int str_len) {
	int result = 0; int len; 

	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]);
		result += (len / 4);

		if (len % 4 != 0)
			result++;
	}

	return result;
}

void main() {
	char* strings[] = { "abcd", "abcde", "acbsbsbsb", "acbsbsbsbs"};
	int str_len = 4;

	printf("%d\n", solution(strings, str_len));
}