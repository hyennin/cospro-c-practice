#include <stdio.h>
#include <stdlib.h>

void main() {
	int arr[10];
	int i, sum;
	double avg;

	// 입력
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 101; // 랜덤 수 저장

	// 요소들의 총합 구하기
	sum = 0;
	for (i = 0; i < 10; i++)
		sum += arr[i];
	avg = (double)sum / 10; // avg가 double 타입이므로 sum을 double로 강제 캐스팅

	// 출력
	printf("합계 : %d\n", sum);
	printf("평균 : %lf\n", avg); // lf는 소수점 아래 여섯 자리까지 출력(default)
}