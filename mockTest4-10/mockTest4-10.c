#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int a[][3], int b[][3], int len) {
	int* answer = (int*)malloc(sizeof(int) * 2);
	int sum = 0;
	int aSum = 0, bSum = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			sum += a[i][j] + b[i][j];
			aSum += a[i][j];
			bSum += b[i][j];
		}
	}
	
	answer[0] = (int)((double)aSum / sum * 100);
	answer[1] = (int)((double)bSum / sum * 100);

	return answer;
}

void main() {
	int a[4][3] = { {3, 2, 7}, {4, 2, 6}, {5, 3, 8}, {7, 6, 8} };
	int b[4][3] = { {30, 50, 120}, {70, 90, 180}, {120, 150, 260}, {102, 120, 104} };
	int len = 4;

	int* res = solution(a, b, len);

	for (int i = 0; i < 2; i++)
		printf("%d ", res[i]);
}