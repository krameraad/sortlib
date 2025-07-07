#include "sortlib.h"

// Shuffle an integer array randomly, using rand().
// @param array Array to shuffle.
// @param size Size of the array.
void shuffle_array_int(int *array, size_t size)
{
	while (size > 1)
	{
		swap_int(&array[rand() % size], &array[size - 1]);
		size--;
	}
}