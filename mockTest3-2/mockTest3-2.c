#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int arr[], int len) {
	int total = 0;

	for (int i = 0; i < len; i++)
		total += arr[i];

	return total;
}

int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len);

	if (req_total > total) {
		for (int i = 0; i < arr_len; i++)
			result[i] = total / arr_len;
	}
	else {
		for (int i = 0; i < arr_len; i++)
			result[i] = arr[i];
	}

	return result;
}

void main() {
	int total = 500;
	int arr[] = { 100, 110, 140, 150 };
	int arr_len = 4;

	int* res = solution(total, arr, arr_len);

	for (int i = 0; i < arr_len; i++)
		printf("%d ", res[i]);
}