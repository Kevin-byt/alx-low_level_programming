#include "main.h"

/**
 * more_numbers - prints 10 times
 */

void more_numbers(void)
{
	int counter, i;

	for (counter = 0; counter < 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

