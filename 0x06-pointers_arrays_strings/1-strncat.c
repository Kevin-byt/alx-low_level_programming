#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);

}
