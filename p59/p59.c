#include <stdio.h>

void Swap(int* pa, int* pb) { // �ּҸ� ���޹޴� �Լ�
	int a = *pa; // ���޹��� �ּ�(a)�� ���� ����
	int b = *pb; // ���޹��� �ּ�(b)�� ���� ����

	*pa = b;
	*pb = a;
}

int main() {
	int a = 5, b = 8;

	printf("a = %d b = %d\n", a, b);

	Swap(&a, &b); // ����� ������ �ּҸ� ����

	printf("�Լ� ȣ�� ��\n");
	printf("a = %d b = %d\n", a, b);

	return 0;
}