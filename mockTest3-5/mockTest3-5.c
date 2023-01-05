#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;
	int mho_cnt = 0, mhe_cnt = 0;


	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] < mhe_arr[i]) mhe_cnt++;
		else if (mho_arr[i] > mhe_arr[i]) mho_cnt++;
	}

	if (mho_cnt > mhe_cnt) result = 1;
	else if (mho_cnt < mhe_cnt) result = 0;

	return result;
}

void main() {
	int mho_arr[] = { 5, 2, 8, 1, 9, 4 };
	int mhe_arr[] = { 6, 8, 3, 7, 4, 9 };
	int arr_len = 6;

	printf("%d\n", solution(mho_arr, mhe_arr, arr_len));

}