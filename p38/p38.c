#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char s1[100] = "���ѹα� ������";
	char s2[100];
	char s3[100];

	// ���ڿ��� ���� ��ȯ strlen(�迭��)
	printf("s1 ���ڿ��� ���� : %d\n", strlen(s1)); // 15

	// �迭 ���� strcpy(�ٿ����� �迭, ������ �迭)
	strcpy(s2, s1);
	printf("%s\n", s2); // ���ѹα� ������

	// �迭�� �ڿ� �����̱� strcat(������ �ٿ����� �迭, �ٿ��� ������ ��� �迭)
	strcat(s2, s1);
	printf("%s\n", s2); // ���ѹα� �����ô��ѹα� ������

	// ���ڿ� ��, ������ 0, �ٸ��� 1 �Ǵ� -1 strcmp(���� ����1, ���� ����2)
	printf("%d\n", strcmp("school", "boy")); // 1
	printf("%d\n", strcmp("boy", "school")); // -1
	printf("%d\n", strcmp("boy", "boy")); // 0
}