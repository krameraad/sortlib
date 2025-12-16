#include "../sortlib.h"

int check_sorted(int *array, size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			return (false);
	}
	return (true);
}
