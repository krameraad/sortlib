#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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
}

// void shuffle_array_int(int *array, size_t size)
// {
    
// }

int main(int argc, char const *argv[])
{
    int array[] = {3, 1, 2, 5, 4, 9, 6, 7, 8, 0};
    int arraysize = 10;
    print_array_int(array, arraysize);
    printf("\n");
    bubble_sort(array, arraysize);
    print_array_int(array, arraysize);
    printf("\n");
    return 0;
}
