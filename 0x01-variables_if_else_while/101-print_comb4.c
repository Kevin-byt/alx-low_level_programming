#include <stdio.h>
/**
 * main - prints all possible different combinations of 3 digits
 * Return: Always 0 - Success
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 0; num < 8; num++)
	{
		for (num2 = num + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar(num + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num == 7)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
