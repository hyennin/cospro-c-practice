#include <stdio.h>

int* solution() {
	int* arr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; ++i) {
		// arr[i] = i + 100; // 길이 알 수 없음
	}

	// return arr; // 동적할당 된 배열의 시작 주소 반환
}

int main() {
	int* result;
	result = solution();

	// for (int i = 0; i < ? ? ; ++i) { // 반환받은 배열의 길이를 알 수 없음
		printf("%2d", result[i]);
	}

	return 0;
}