#include <stdio.h>

void main() {
	int* pArr[5]; // ������ ���� 5���� �����ϴ� �迭
	pArr[0] = 10;
	pArr[1] = 20;
	pArr[2] = 30;
	pArr[3] = 40;
	pArr[4] = 50;
	printf("[0]�� ��� : %d\n", pArr[0]);
	printf("[1]�� ��� : %d\n", pArr[1]);
	printf("[2]�� ��� : %d\n", pArr[2]);
	printf("[3]�� ��� : %d\n", pArr[3]);


	char* pStr[4] = {"red", "green", "blue", "gray"};
	printf("[0]�� ���ڿ� ��� : %s\n", pStr[0]);
	printf("[1]�� ���ڿ� ��� : %s\n", pStr[1]);
	printf("[2]�� ���ڿ� ��� : %s\n", pStr[2]);
	printf("[3]�� ���ڿ� ��� : %s\n", pStr[3]);
}