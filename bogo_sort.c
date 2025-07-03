#include "sortlib.h"
#define SORTED 1
#define NOT_SORTED 0

// Check if an array is sorted in ascending order.
// @param array Array to check.
// @param size Size of the array.
int check_sorted(int *array, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			return (NOT_SORTED);
	}
	return (SORTED);
}

void bogo_sort(int *array, size_t size)
{
	while (!check_sorted(array, size))
		shuffle_array_int(array, size);
}
