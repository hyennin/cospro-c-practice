#include <stdio.h>

int* solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left += 1;
		right -= 1;
	}

	return arr;
}

void main() {
	int arr[4] = { 1, 4, 2, 3 };
	int arr_len = 4;
	int* res = solution(arr, arr_len);

	for (int i = 0; i < arr_len; i++) {
		printf("%d ", res[i]);
	}
}