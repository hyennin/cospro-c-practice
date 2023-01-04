#include <stdio.h>
#include <string.h>

int solution(int price, char rank[]) {
	int answer = 0;

	if (strcmp(rank, "S") == 0) answer = (int)(price * 1.05);
	if (strcmp(rank, "G") == 0) answer = (int)(price * 1.1);
	if (strcmp(rank, "V") == 0) answer = (int)(price * 1.15);

	return answer;
}

void main() {
	int price = 10000;
	char rank[2] = "G";

	printf("%d\n", solution(price, rank));
}