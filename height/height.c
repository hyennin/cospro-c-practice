#include <stdio.h>

int solution(int height[], int height_len, int k) {
	int answer = 0;

	for (int i = 0; i < height_len; ++i)
		if (height[i] > k)
			answer++;

	return answer;
}

void main() {
	int height[] = { 165, 170, 175, 180, 184 };
	int height_len = 5;

	printf("%d\n", solution(height, height_len, 175));
}