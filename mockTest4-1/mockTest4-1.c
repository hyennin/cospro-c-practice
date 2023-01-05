#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int cards[]) {
	int answer = 0;

	for (int i = 0; i < 3; i++)
		for (int j = i+1; j < 5; j++)
			for (int k = j+1; k < 5; k++)
				if ((cards[i] + cards[j] + cards[k]) % 2 != 0)
					answer++;

	return answer;
}

void main() {
	int cards[] = { 7, 5, 6, 4, 9 };

	printf("%d", solution(cards));
}