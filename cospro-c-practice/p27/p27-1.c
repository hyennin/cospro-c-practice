#include <stdio.h>

void main() {
	int arr[3][4] = { 0 }; // 0���� �ʱ�ȭ
	printf("arr�� ũ�� : %d\n", sizeof(arr)); // ����Ʈ�� ���� 12 * 4 = 48
	printf("arr[0]�� ũ�� : %d\n", sizeof(arr[0])); // ����Ʈ�� ���� 4 * 4 = 16
	printf("arr[1]�� ũ�� : %d\n", sizeof(arr[1])); // ����Ʈ�� ���� 4 * 4 = 16
	printf("arr[2]�� ũ�� : %d\n", sizeof(arr[2])); // ����Ʈ�� ���� 4 * 4 = 16
	printf("arr[2][3]�� ũ�� : %d\n", sizeof(arr[2][3])); // ����Ʈ�� ���� 1 * 4 = 4

	char ch = '9';
	int number = ch - 48; // ch - '0', ���ڸ� ���������� �ٲ� �� - 48�� ��
	printf("%3d", number); // ch�� ���� �ڵ� �� = 57, 57 - 48 = 9
	printf("%3d", ch); // ch�� ���� �ڵ� = 57
}