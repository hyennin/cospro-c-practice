#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int arr[], int arr_len) {
	int* answer = (int*)malloc(sizeof(int) * 3);

	for (int i = 0; i < 3; i++) {
		answer[i] = 0;
		for (int j = 0; j < 4; j++) {
			answer[i] += arr[i * 4 + j];
		}
	}

	return answer;
}

void main() {
	int arr[] = { 8, 5, 3, 5, 6, 7, 3, 4, 5, 6, 7, 8 };
	int arr_len = 12;

	int* res = solution(arr, arr_len);
	
	for (int i = 0; i < 3; i++)
		printf("%d ", res[i]);
}