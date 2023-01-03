#include <stdio.h>

int func_a(char p[][20], int n);

void main() {
	char titles[3][20] = { "first", "second", "third" };
	func_a(titles, 3);
}

// 1, 2 모두 가능 (배열 == 포인터)
// int func_a(char p[][20], int n) // 1)
int func_a(char (*p)[20], int n) { // 2)
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%c", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}