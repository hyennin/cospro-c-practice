#include <stdio.h>

int solution(int data[], int data_len) {
	double total = 0;

	for (int i = 0; i < data_len; ++i)
		total += data[i];
	
	int cnt = 0;
	double average = total / data_len;
	
	for (int i = 0; i < data_len; ++i)
		if (data[i] <= average) cnt += 1;

	return cnt;
}

void main() {
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int data_len = 10;

	printf("%d\n", solution(data, data_len));
}