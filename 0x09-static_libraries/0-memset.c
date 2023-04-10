#include "main.h"

/**
 * _memset - fills the first n bytes with a constant byte
 * @s: the filled address start value
 * @b: the value used for filling
 * @n: number of bytes to be filled *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	for (; n > 0; counter++)
	{
		s[counter] = b;
		n--;
	}
	return (s);
}

