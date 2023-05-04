#include "main.h"

/**
 * get_bit - gets bit at index
 * @n: number tocheck
 * @index: index of the bit
 * Return: The bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

