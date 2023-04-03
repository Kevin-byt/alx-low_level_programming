#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals in a sq matrix
 * @a: matrix
 * @size: matrix rows
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sumdiag1;
	int sumdiag2;
	int i;

	sumdiag1 = 0;
	sumdiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumdiag1 = sumdiag1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sumdiag2 = sumdiag2 + a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sumdiag1, sumdiag2);
}

