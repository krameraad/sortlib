#include "sortlib.h"

// Swap the values of two integers using pointers.
// @param a First integer.
// @param b Second integer.
void swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
