#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;

	for (int i = 0; i < arr_len; i++) {
		answer += arr[i] / k;

		if (arr[i] % k) answer++;
	}

	return answer;
}

void main() {
	int arr[] = { 13, 16, 9, 2, 10, 7 };
	int arr_len = 6;
	int k = 4;

	printf("%d", solution(arr, arr_len, k));
}