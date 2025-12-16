#include "../sortlib.h"

void bubble_sort(int *array, size_t size)
{
	size_t lastswap;

	do
	{
		lastswap = 0;
		for (size_t i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(&array[i], &array[i + 1]);
				lastswap = i;
			}
		}
		size--;
	} while (lastswap != 0);
}
