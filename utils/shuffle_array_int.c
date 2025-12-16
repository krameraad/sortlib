#include "../sortlib.h"

void shuffle_array_int(int *array, size_t size)
{
	for (; size > 1; size--)
		swap_int(&array[rand() % size], &array[size - 1]);
}
