#include "../sortlib.h"

void selection_sort(int *array, size_t size)
{
	size_t smallest;

	do
	{
		smallest = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (array[i] < array[smallest])
				smallest = i;
		}
		swap_int(&array[0], &array[smallest]);
		array++;
		size--;
	} while (size >= 2);
}
