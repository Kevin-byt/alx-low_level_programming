#include <stdio.h>
/**
 * main - prints all numbers of base 16 (0..f) using putchar
 * Return: Always 0 - Success
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(num - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
