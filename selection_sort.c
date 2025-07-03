#include "sortlib.h"

void selection_sort(int *array, size_t size)
{
	unsigned int smallest = 0;
	unsigned int i = 1;

	while (i < size)
	{
		if (array[i] < array[smallest])
			smallest = i;
		i++;
	}
	swap_int(&array[0], &array[smallest]);
	if (size > 2)
		selection_sort(array + 1, size - 1);
}
