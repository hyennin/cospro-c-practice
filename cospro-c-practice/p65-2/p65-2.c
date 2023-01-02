#include <stdio.h>
#include <stdlib.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < len; ++i) {
		arr[i] = i + 100; 
	}

	return arr; // 동적할당 된 배열의 시작 주소 반환
}

int main() {
	int* result;
	result = solution(10); // 호출하는 함수에서 길이 지정

	for (int i = 0; i < 10; ++i) // 반환받은 배열의 길이를 알고 있음
	printf(" %d", result[i]);

return 0;
}