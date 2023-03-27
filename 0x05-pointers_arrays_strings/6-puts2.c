#include "main.h"

/**
 * puts2 - prints every other character in  a string
 * @str: string to print
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *s = str;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
