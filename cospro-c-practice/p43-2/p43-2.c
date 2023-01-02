#include <stdio.h>

void main() {
	char* pChar;
	int* pInt;
	double* pDouble;

	// 포인터 변수의 바이트 크기 : 8byte
	printf("%d\n", sizeof(pChar)); // 8
	printf("%d\n", sizeof(pInt)); // 8
	printf("%d\n", sizeof(pDouble)); // 8

	// 포인터가 가리키는 곳의 각 타입의 바이트 크기
	printf("%d\n", sizeof(*pChar)); // 1
	printf("%d\n", sizeof(*pInt)); // 4
	printf("%d\n", sizeof(*pDouble)); // 8
}