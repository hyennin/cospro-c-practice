#include <stdio.h>

void main() {
	int arr[3][4] = { 0 }; // 0으로 초기화
	printf("arr의 크기 : %d\n", sizeof(arr)); // 바이트를 리턴 12 * 4 = 48
	printf("arr[0]의 크기 : %d\n", sizeof(arr[0])); // 바이트를 리턴 4 * 4 = 16
	printf("arr[1]의 크기 : %d\n", sizeof(arr[1])); // 바이트를 리턴 4 * 4 = 16
	printf("arr[2]의 크기 : %d\n", sizeof(arr[2])); // 바이트를 리턴 4 * 4 = 16
	printf("arr[2][3]의 크기 : %d\n", sizeof(arr[2][3])); // 바이트를 리턴 1 * 4 = 4

	char ch = '9';
	int number = ch - 48; // ch - '0', 문자를 정수형으로 바꿀 때 - 48을 함
	printf("%3d", number); // ch의 정수 코드 값 = 57, 57 - 48 = 9
	printf("%3d", ch); // ch의 정수 코드 = 57
}