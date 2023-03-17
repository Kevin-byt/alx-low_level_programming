#include <stdio.h>
/**
 * main - prints single numbers of base 10 using putchar comma separated
 * Return: Always 0 - Success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
