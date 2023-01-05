#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int walls) {
	int answer = 0; int painted_walls = 0;
	int i;

	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i/2) + (i/4);
	}

	answer = i - 1;

	return answer;
}

void main() {
	int walls = 10;

	printf("%d\n", solution(walls));
}