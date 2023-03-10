#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int) * 6);
	
	for (int i = 0; i < 6; i++) answer[i] = 0;

	for (int i = 0; i < shirt_size_len; i++)
		if (strcmp(shirt_size[i], "7") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "7.5") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "8") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "8.5") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "9") == 0) answer[4]++;
		else if (strcmp(shirt_size[i], "9.5") == 0) answer[5]++;

	return answer;
}

void main() {
	char* shirt_size[] = { "7", "7", "8", "8.5", "8.5", "8.5", "9", "9.5", "9.5" };
	int shirt_size_len = 9;

	int* res = solution(shirt_size, shirt_size_len);

	for (int i = 0; i < 6; i++)
		printf("%d ", res[i]);
}