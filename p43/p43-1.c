#include <stdio.h>

void main() {
	int number = 5;
	int* pNumber = NULL; // �ּҸ� �������� ���� ���¸� ǥ��]

	printf("number�� �� : %d\n", number);
	pNumber = &number; // number ������ �ּҸ� ����Ŵ
	*pNumber = *pNumber + 5; // *pNumber = number + 5 �� ����
	printf("number�� �� : %d\n", number); // 10

	// ���� �ּҰ� ����
	printf("number�� �ּҰ� : %p\n", &number); // 000000526FDDFB44
	printf("*pNumber�� �ּҰ� : %p\n", pNumber); // 000000526FDDFB44
}