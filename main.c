#include <stdio.h>
#include "sortlib.h"

// Print an integer array to the terminal.
// @param array Array to print.
// @param size Number of integers in the array.
void print_array_int(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}

// Uses malloc() to create a new array containing integers ranging from 0 to size.
// @param size Amount of integers in the array.
int *create_array(size_t size)
{
	int *array;
	int i;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return NULL;
	while (i < size)
	{
		array[i] = i;
		i++;
	}
	return array;
}

int main(int argc, char const *argv[])
{
	int *array;
	int arraysize = 10;

    srand(time(NULL)); // Initialize rng seed
	array = create_array(arraysize);

	shuffle_array_int(array, arraysize);
    print_array_int(array, arraysize);
    cocktail_sort(array, arraysize);
    print_array_int(array, arraysize);

    return 0;
}
