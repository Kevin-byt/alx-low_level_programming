#include "main.h"
/**
 * _strspn - gets the length of a substring using particular bytes
 * @s: input string
 * @accept: input bytes
 * Return: Number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

