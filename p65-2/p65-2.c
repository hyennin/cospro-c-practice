#include <stdio.h>
#include <stdlib.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < len; ++i) {
		arr[i] = i + 100; 
	}

	return arr; // �����Ҵ� �� �迭�� ���� �ּ� ��ȯ
}

int main() {
	int* result;
	result = solution(10); // ȣ���ϴ� �Լ����� ���� ����

	for (int i = 0; i < 10; ++i) // ��ȯ���� �迭�� ���̸� �˰� ����
	printf(" %d", result[i]);

return 0;
}