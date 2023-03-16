#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a line to the standard output using fput
 * Return: Always returns 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(str, stdout);
	return (1);
}
