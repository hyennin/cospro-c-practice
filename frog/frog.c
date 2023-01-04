#include <stdio.h>

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;

	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}

	return cnt;
}

void main() {
	int stones[] = { 2, 5, 1, 3, 2, 1 };
	int stones_len = 6;

	printf("%d\n", solution(stones, stones_len));
}