#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(char pass[], char key[]) {
	int answer = 0; int match_cnt = 0;

	for (int i = 0; key[i] != 0; i++) {
		for (int j = 0; pass[j] != 0; j++) {
			if (key[i] == pass[j]) {
				match_cnt++;
				break;
			}
		}
	}

	if (match_cnt >= strlen(key)) answer = 1;

	return answer;
}

void main() {
	char pass[] = "asdGgd#9fe";
	char key[] = "Ga#9";

	printf("%d\n", solution(pass, key));
}