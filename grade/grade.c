#include <stdio.h>
#include <stdlib.h>

int* solution(int scores[], int scores_len) {
	int* grade_counter = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; ++i)
		grade_counter[i] = 0;

	for (int i = 0; i < scores_len; ++i) {
		if (scores[i] >= 85) grade_counter[0]++;
		else if (scores[i] >= 70) grade_counter[1]++;
		else if (scores[i] >= 55) grade_counter[2]++;
		else if (scores[i] >= 40) grade_counter[3]++;
		else grade_counter[4]++;
	}

	return grade_counter;
}

void main() {
	int scores[] = { 10, 100, 80, 84, 70, 55, 86, 84 };
	int scores_len = 8;

	int* res = solution(scores, scores_len);

	for (int i = 0; i < 5; i++)
		printf("%d ", res[i]);
}