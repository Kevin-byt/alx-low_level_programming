#include <stdio.h>
/**
 * main - prints single numbers of base 10 using putchar
 * Return: Always 0 - Success
 */
int main(void)
{
	char num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
