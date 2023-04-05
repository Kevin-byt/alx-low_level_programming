#include "main.h"

/**
 * _print_rev_recursion - Prints string(@s) in reverse.
 * @s: The string to be reveresed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

