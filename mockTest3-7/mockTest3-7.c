#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;

	result[0] = 0;
	result[1] = 0;

	for (int i = 0; i < 3; i++) {
		temp = b;

		for (int j = 0; j < 3; j++) {
			if (a % 10 == temp % 10) {
				if (i == j) result[0]++;
				else result[1]++;
			}
			temp /= 10;
		}

		a /= 10;
	}

	return result;
}

void main() {
	int a = 123;
	int b = 345;

	int* res = solution(a, b);

	for (int i = 0; i < 2; i++)
		printf("%d ", res[i]);
}