#include <stdio.h>
int sum; // 전역변수 sum

int* Add (int x, int y) { // 주소를 반환할 때는 *를 붙임
	// int sum; // 지역변수 sum
	sum = x + y;
	return &sum; // sum의 주소 반환
}

void main() {
	int x = 5, y = 7;
	int* pz; // 함수의 반환형이 주소
	pz = Add(x, y);

	// 지역변수일 경우 종료 직후에만 값을 볼 수 있음
	// 전역변수를 사용하면 이후에도 값을 볼 수 있음 
	printf("%d\n", *pz);
	printf("%d\n", *pz); // 지역변수인 sum의 주소를 반환하면 그 값이 유지되지 않음
	return 0;
}