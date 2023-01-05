#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int table[][5], int table_len) {
	int answer = 0;
	int chk[] = { 0, 0, 0, 0, 0 };

	for (int i = 1; i < table_len; i++) {
		for (int j = 0; j < 5; j++) {
			if (table[0][j] == table[i][j])
				chk[i-1]++;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (answer < chk[i])
			answer = i + 1;
	}

	return answer;
}

void main() {
	int table[6][5] = { {2, 6, 1, 7, 3}, {2, 9, 4, 6, 8}, {6, 3, 4, 7, 1}, {7, 7, 1, 1, 2}, {8, 6, 9, 7, 3}, {4, 6, 5, 9, 2} };
	int table_len = 6;

	printf("%d\n", solution(table, table_len));
}