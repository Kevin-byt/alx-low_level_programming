#include  "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: The 1st integer
 * @b: The 2nd integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
