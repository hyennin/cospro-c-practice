#include <stdio.h>

int* solution() {
	int* arr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; ++i) {
		// arr[i] = i + 100; // ���� �� �� ����
	}

	// return arr; // �����Ҵ� �� �迭�� ���� �ּ� ��ȯ
}

int main() {
	int* result;
	result = solution();

	// for (int i = 0; i < ? ? ; ++i) { // ��ȯ���� �迭�� ���̸� �� �� ����
		printf("%2d", result[i]);
	}

	return 0;
}