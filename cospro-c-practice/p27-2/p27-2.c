#include <stdio.h>
#include <stdlib.h>

void main() {
	int arr[10];
	int i, sum;
	double avg;

	// �Է�
	for (i = 0; i < 10; i++)
		arr[i] = rand() % 101; // ���� �� ����

	// ��ҵ��� ���� ���ϱ�
	sum = 0;
	for (i = 0; i < 10; i++)
		sum += arr[i];
	avg = (double)sum / 10; // avg�� double Ÿ���̹Ƿ� sum�� double�� ���� ĳ����

	// ���
	printf("�հ� : %d\n", sum);
	printf("��� : %lf\n", avg); // lf�� �Ҽ��� �Ʒ� ���� �ڸ����� ���(default)
}