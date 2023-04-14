#include "main.h"

/**
 * *array_range - creates an integer array
 * @min: minimum value stored
 * @max: maximum value stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

