#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

double solution(int a, int b) {
	double answer = 0;
	int diff = (a < b) ? b - a : a - b;
	answer = 10.0 / diff;

	return answer * 60;
}

void main() {
	int a = 6;
	int b = 10;

	printf("%lf\n", solution(a, b));
}