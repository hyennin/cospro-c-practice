#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int student[], int apts) {
	int result = 0;
	int cnt = 0;

	for (int i = 0; i < apts; i++) {
		cnt += student[i];
	}

	result = cnt / 12;

	if (cnt % 12) result++;

	return result;
}

void main() {
	int student[] = { 6, 4, 2, 8, 5 };
	int apts = 5;

	printf("%d", solution(student, apts));
}