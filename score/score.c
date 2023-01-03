#include <stdio.h>

int solution(int scores[], int scores_len) {
	int count = 0;
	
	for (int i = 0; i < scores_len; i++) {
		if (650 <= scores[i] && scores[i] < 800)
			count += 1;
	}

	return count;
}

int main() {
	int scores[10] = { 600, 900, 780, 660, 800, 600, 500, 720, 860, 700 };
	int scores_len = 10;

	printf("%d\n", solution(scores, scores_len));
}