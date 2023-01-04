#include <stdio.h>

int* func_a(int arr[][4], int n) {
	int min = 1001;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			if (min > arr[i][j])
				min = arr[i][j];

	return min;
}

int func_b(int arr[][4], int n, int del) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			if (del == arr[i][j]) {
				arr[i][j] = 1001;
				return 1;
			}

	return 0;
}

int solution(int arr[][4], int arr_len, int n, int k) {
	int answer = 0, min;

	for (int i = 1; i <= k; i++) {
		min = func_a(arr, n);
		func_b(arr, n, min);
	}

	answer = min;
	return answer;
}

void main() {
	int arr[4][4] = { {5, 121, 4, 31}, {24, 13, 11, 2}, {43, 44, 19, 26}, {33, 65, 20, 21} };
	int arr_len = 4, n = 4, k = 3;

	printf("%d\n", solution(arr, arr_len, n, k));
}