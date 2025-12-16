#include "../sortlib.h"

void cocktail_sort(int *array, size_t size)
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
	if (!lastswap)
		return;
	lastswap = 0;
	i--;
	while (i)
	{
		if (array[i] < array[i - 1])
		{
			swap_int(&array[i], &array[i - 1]);
			lastswap = i;
		}
		i--;
	}
	if (lastswap)
		cocktail_sort(array + 1, size - 1);
}
