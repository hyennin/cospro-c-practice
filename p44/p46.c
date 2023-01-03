#include <stdio.h>

void main() {
	int* pArr[5]; // 포인터 변수 5개를 저장하는 배열
	pArr[0] = 10;
	pArr[1] = 20;
	pArr[2] = 30;
	pArr[3] = 40;
	pArr[4] = 50;
	printf("[0]번 상수 : %d\n", pArr[0]);
	printf("[1]번 상수 : %d\n", pArr[1]);
	printf("[2]번 상수 : %d\n", pArr[2]);
	printf("[3]번 상수 : %d\n", pArr[3]);


	char* pStr[4] = {"red", "green", "blue", "gray"};
	printf("[0]번 문자열 상수 : %s\n", pStr[0]);
	printf("[1]번 문자열 상수 : %s\n", pStr[1]);
	printf("[2]번 문자열 상수 : %s\n", pStr[2]);
	printf("[3]번 문자열 상수 : %s\n", pStr[3]);
}