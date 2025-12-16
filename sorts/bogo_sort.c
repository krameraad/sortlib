#include "../sortlib.h"

void bogo_sort(int *array, size_t size)
{
	while (!check_sorted(array, size))
		shuffle_array_int(array, size);
}
