#include "../sortlib.h"

void comb_sort(int *array, size_t size)
{
	float	shrink = 1.3f;
	int		distance = size / shrink;
	int		lastswap = 0;
	int		i = 0;

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
		comb_sort(array, size - 1);
}
