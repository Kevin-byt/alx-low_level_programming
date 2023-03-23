#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	for (char c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

