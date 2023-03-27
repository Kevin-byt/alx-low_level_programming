#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int str_len = 0;
	int i;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	for (i = str_len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

