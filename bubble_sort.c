#include "sortlib.h"

void bubble_sort(int *array, size_t size)
{
	int lastswap = 0;
	int i = 0;

	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			swap_int(&array[i], &array[i + 1]);
			lastswap = i;
		}
		i++;
	}
	if (lastswap)
		bubble_sort(array, size - 1);
}
