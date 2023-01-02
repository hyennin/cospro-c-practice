#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char s1[100] = "대한민국 파이팅";
	char s2[100];
	char s3[100];

	// 문자열의 길이 반환 strlen(배열명)
	printf("s1 문자열의 길이 : %d\n", strlen(s1)); // 15

	// 배열 복사 strcpy(붙여넣을 배열, 복사할 배열)
	strcpy(s2, s1);
	printf("%s\n", s2); // 대한민국 파이팅

	// 배열의 뒤에 덧붙이기 strcat(내용을 붙여넣을 배열, 붙여질 내용이 담긴 배열)
	strcat(s2, s1);
	printf("%s\n", s2); // 대한민국 파이팅대한민국 파이팅

	// 문자열 비교, 같으면 0, 다르면 1 또는 -1 strcmp(비교할 내용1, 비교할 내용2)
	printf("%d\n", strcmp("school", "boy")); // 1
	printf("%d\n", strcmp("boy", "school")); // -1
	printf("%d\n", strcmp("boy", "boy")); // 0
}