#include <stdio.h>

void main() {
	char* pChar;
	int* pInt;
	double* pDouble;

	// ������ ������ ����Ʈ ũ�� : 8byte
	printf("%d\n", sizeof(pChar)); // 8
	printf("%d\n", sizeof(pInt)); // 8
	printf("%d\n", sizeof(pDouble)); // 8

	// �����Ͱ� ����Ű�� ���� �� Ÿ���� ����Ʈ ũ��
	printf("%d\n", sizeof(*pChar)); // 1
	printf("%d\n", sizeof(*pInt)); // 4
	printf("%d\n", sizeof(*pDouble)); // 8
}