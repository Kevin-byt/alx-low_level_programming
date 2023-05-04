#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - converts decimal to binary
 * @n: Decimal number to convert
 */

void print_binary(unsigned long int n)
{
	int i, size = 0;
	unsigned long int bit;

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
			_putchar('0');
	}
	if (!size)
		_putchar('0');
}
