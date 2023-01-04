#include <stdio.h>

int solution(int price[], int price_len, int money) {
	int sum = 0;

	for (int i = 0; i < price_len; i++)
		sum += price[i];

	if (sum <= money) return money - sum;
	else return -1;
}

void main() {
	int price[] = { 2100, 3200, 2100, 800 };
	int price_len = 4;
	int money = 10000;

	printf("%d\n", solution(price, price_len, money));
}