#include <stdio.h>

int solution(int p[]) { // [] => 배열이 전달되는 것임을 알리려는 의도
	printf("p의 크기 : %d\n", sizeof(p)); // p는 포인터 변수
		
	return 0;
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr의 크기 : %d\n", sizeof(arr));
	solution(arr); // 배열의 시작 주소 전달

	return 0;
}