#include "main.h"

/**
 * puts_half - prints half the string
 * @str: string to print
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	char *s = str;
	int halflen;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	if (len % 2 == 0)
	{
		halflen = len / 2;
	} else
	{
		halflen = (len - 1) / 2;
	}

	for (i = halflen; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
