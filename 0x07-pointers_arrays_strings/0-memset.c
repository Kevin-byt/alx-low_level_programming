#include "main.h"

/**
 *_memcpy - fills the first n bytes
 *@dest: memory filled
 *@src: memory of the constant  byte copied
 *@n: number of bytes to copy
 *
 *Return: the memory after the copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counter = 0;
	int bytes = n;

	for (; counter < bytes; counter++)
	{
		dest[counter] = src[counter];
		n--;
	}
	return (dest);
}

