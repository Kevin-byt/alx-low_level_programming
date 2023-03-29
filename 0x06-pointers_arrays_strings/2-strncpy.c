#include "main.h"

/**
 * _strncpy - copies n bytes of a string into another string
 * @dest: destination string
 * @src: Source string
 * @n: Number of bytes in src to copy to dest
 * Return: The copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
