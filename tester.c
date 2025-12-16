#include "sortlib.h"
#include <stdio.h>

/// @brief Print an integer array to the terminal.
/// @param array Array to print.
/// @param size Number of integers in the array.
static void print_array_int(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d, ", array[i]);
		else
       		printf("%d\n", array[i]);
    }
}

/// @brief Uses `malloc()` to create a new array,
/// containing integers ranging from 0 to `size`.
/// @param size Amount of integers in the array.
/// @return Array that was created. `NULL` if allocation failed.
static int *create_array(size_t size)
{
	int *array = malloc(size * sizeof(int));

	if (array == NULL)
		return NULL;
	for (size_t i = 0; i < size; i++)
		array[i] = i;
	return array;
}

int main(int argc, char const *argv[])
{
	int *array;
	size_t size = 10;

    srand(time(NULL)); // Initialize rng seed
	array = create_array(size);

	shuffle_array_int(array, size);
    print_array_int(array, size);
    selection_sort(array, size);
    print_array_int(array, size);

    return 0;
}
