#include <stdio.h>
#include <stdlib.h.>

int func_a(int a[][4], int n) {
	int total = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			total += a[i][j];

	return total / (n * 4);
}

int* func_b(int a[][4], int n, int val) {
	int* ret = (int*)malloc(sizeof(int) * (n * 4));
	int k = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			if (a[i][j] < val) ret[k++] = a[i][j];

	ret[k] = -1;

	return ret;
}

int* solution(int arr[][4], int n) {
	int avg = func_a(arr, n);
	int* answer = func_b(arr, n, avg);

	return answer;
}

void main() {
	int arr[4][4] = { {5, 12, 4, 31}, {24, 13, 11, 2}, {43, 44, 19, 26}, {33, 65, 20, 21} };
	int n = 4;

	int* res = solution(arr, n);

	for (int i = 0; i < 8; i++)
		printf("%d ", res[i]);
}