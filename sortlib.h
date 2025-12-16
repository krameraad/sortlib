#ifndef SORTLIB_H
#define SORTLIB_H

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*
	UTILS
*/

/// @brief Swap the values of two integers using pointers.
/// @param a First integer.
/// @param b Second integer.
void swap_int(int* a, int* b);

/// @brief Shuffle an integer array randomly, using `rand()`.
/// @param array Array to shuffle.
/// @param size Size of the array.
void shuffle_array_int(int* array, size_t size);

/// @brief Check if an array is sorted in ascending order.
/// @param array Array to check.
/// @param size Size of the array.
int check_sorted(int *array, size_t size);

/*
	SORTS
*/

void bubble_sort(int* array, size_t size);
void cocktail_sort(int* array, size_t size);
void comb_sort(int* array, size_t size);
void selection_sort(int* array, size_t size);
void bogo_sort(int* array, size_t size);

#endif
