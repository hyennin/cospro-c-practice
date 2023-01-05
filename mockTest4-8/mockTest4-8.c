#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a[], int n) {
	int total = 0;

	for (int i = 0; i < n; i++) total += a[i];
	
	return total;
}

int func_b(int a, int b) {
	return (a < b) ? b - a : a - b;
}

int func_c(int a, int b[], int n) {
	int diff;
	int max_diff = 0;
	int max_score = 0;

	for (int i = 0; i < n; i++) {
		diff = func_b(a, b[i]);
		if (max_diff < diff) {
			max_diff = diff;
			max_score = b[i];
		}
	}

	return max_score;
}

int solution(int scores[], int scores_len) {
	int answer = 0;
	int total = func_a(scores, scores_len);
	int avg = total / scores_len;
	int max_score = func_c(avg, scores, scores_len);
		
	answer = max_score;
	
	return answer;
}

void main() {
	int scores[] = { 10, 90, 50, 30, 60 };
	int scores_len = 5;

	printf("%d", solution(scores, scores_len));
}