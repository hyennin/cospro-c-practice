#include <stdio.h>
int sum; // �������� sum

int* Add (int x, int y) { // �ּҸ� ��ȯ�� ���� *�� ����
	// int sum; // �������� sum
	sum = x + y;
	return &sum; // sum�� �ּ� ��ȯ
}

void main() {
	int x = 5, y = 7;
	int* pz; // �Լ��� ��ȯ���� �ּ�
	pz = Add(x, y);

	// ���������� ��� ���� ���Ŀ��� ���� �� �� ����
	// ���������� ����ϸ� ���Ŀ��� ���� �� �� ���� 
	printf("%d\n", *pz);
	printf("%d\n", *pz); // ���������� sum�� �ּҸ� ��ȯ�ϸ� �� ���� �������� ����
	return 0;
}