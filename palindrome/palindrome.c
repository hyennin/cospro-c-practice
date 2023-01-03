#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum bool{ false, true } bool;

bool solution(char* sentence) {
	char* str = (char*)malloc(sizeof(char) * 103);
	int len = 0;
	for (int i = 0; i < strlen(sentence); i++) {
		char ch = sentence[i];
		if (ch != ' ' || ch != '.') str[len++] = ch;
	}

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) return false;
	}

	return true;
}

void main() {
	char* sentence = "racecar";

	if (solution(sentence)) printf("�Ӹ�����Դϴ�.");
	else printf("�Ӹ������ �ƴմϴ�.");
}