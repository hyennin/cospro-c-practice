#include <stdio.h>

void Swap(int* pa, int* pb) { // 주소를 전달받는 함수
	int a = *pa; // 전달받은 주소(a)의 값을 복사
	int b = *pb; // 전달받은 주소(b)의 값을 복사

	*pa = b;
	*pb = a;
}

int main() {
	int a = 5, b = 8;

	printf("a = %d b = %d\n", a, b);

	Swap(&a, &b); // 변경될 변수의 주소를 전달

	printf("함수 호출 후\n");
	printf("a = %d b = %d\n", a, b);

	return 0;
}