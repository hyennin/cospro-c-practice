#include <stdio.h>
#include <string.h>

int solution(int price, char rank) {
	int answer = 0;

	if (strcmp(rank, "S") == 0) answer = price * 0.95;
	if (strcmp(rank, "G") == 0) answer = price * 0.9;
	if (strcmp(rank, "V") == 0) answer = price * 0.85;
}

void main() {
	int price = 10000;
	char rank = 'G';

	printf("%d\n", solution(price, rank));
}