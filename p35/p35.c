#include <stdio.h>

void main() {
	char color[5][5] = { "red", "green", "blue", "brown", "cyan" };
	int i, j;

	for (i = 0; i < 5; i++)
		printf("%s\n", color[i]);

	// ���ڵ��� �ϳ��� ���
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			printf("%c", color[i][j]);
		}
		printf("\n");
	}
}