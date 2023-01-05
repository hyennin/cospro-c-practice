#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int max_product_number = 10;

int* func_a(int gloves[], int gloves_len) {
    int* counter = (int*)malloc(sizeof(int) * (max_product_number + 1));
    for (int i = 0; i <= max_product_number; ++i)
        counter[i] = 0;

    for (int i = 0; i < gloves_len; ++i)
        counter[i]++;

    return counter;
}