#include <stdio.h>

void main() {
	int number = 5;
	int* pNumber = NULL; // 주소를 저장하지 않은 상태를 표시]

	printf("number의 값 : %d\n", number);
	pNumber = &number; // number 변수의 주소를 가리킴
	*pNumber = *pNumber + 5; // *pNumber = number + 5 와 같음
	printf("number의 값 : %d\n", number); // 10

	// 같은 주소가 나옴
	printf("number의 주소값 : %p\n", &number); // 000000526FDDFB44
	printf("*pNumber의 주소값 : %p\n", pNumber); // 000000526FDDFB44
}