#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * shirt_size_len); // 동적 할당

	for (int i = 0; i < shirt_size_len; i++) answer[i] = 0; // 초기화

	for (int i = 0; i < shirt_size_len; i++) {
		// strcmp 사용하여 비교
		if (strcmp(shirt_size[i], "XS") == 0) answer[0]++;
		else if (strcmp(shirt_size[i], "S") == 0) answer[1]++;
		else if (strcmp(shirt_size[i], "M") == 0) answer[2]++;
		else if (strcmp(shirt_size[i], "L") == 0) answer[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0) answer[4]++;
		else if (strcmp(shirt_size[i], "XXL") == 0) answer[5]++;
	}

	return answer;
}

void main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;

	int* res = solution(shirt_size, shirt_size_len);

	for (int i = 0; i < 6; i++) {
		printf("%d ", res[i]);
	}
}