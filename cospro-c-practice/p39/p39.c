#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char word[6][20] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��" };
	char key[20] = { 0 };
	int i, pos = 0;
	strcpy(key, "����");

	printf("ã�� �ܾ� : %s\n", key);

	for (i = 0; i < 6; i++) {
		if (strcmp(word[i], key) == 0) {
			printf("������ %d ��°�� �ֽ��ϴ�.", i+1);
			pos++;
		}
	}

	if (pos == 0) printf("������ �����ϴ�.");
}