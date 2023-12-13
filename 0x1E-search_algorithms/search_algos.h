#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Include nessesary libraries */
#include <stdio.h>

int min(int a, int b);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_algo(int *array, int left, int right, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
