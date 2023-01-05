#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);

	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int j = 0; j < 4; j++) {
			if (i != j) {
				result[i] += scores[i][j] * 2;
			}
		}
	}

	return result;
}

void main() {
	int scores[][4] = { {0, 1, 0, 0}, {0, 0, 0, 1}, {1, 1, 0, 1}, {1, 0, 0, 0 } };
	int scores_len = 4;

	int* res = solution(scores, scores_len);

	for (int i = 0; i < scores_len; i++)
		printf("%d ", res[i]);
}