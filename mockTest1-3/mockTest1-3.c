#include <stdio.h>

int solution(int scores[], int scores_len) {
	int count = 0;

	for (int i = 0; i < scores_len; i++)
		if (0 <= scores[i] && scores[i] <= 200)
			count++;

	return count;
}

void main() {
	int scores[] = { 23, 100, 324, 54, 167, 273, 200 };
	int scores_len = 7;

	printf("%d\n", solution(scores, scores_len));
}