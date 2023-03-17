#include <stdio.h>
/**
 * main - prints single numbers of base 10
 * Return: Always 0 - Success
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
