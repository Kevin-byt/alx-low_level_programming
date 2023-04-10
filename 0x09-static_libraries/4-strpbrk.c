#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input string
 * @accept: bytes to match
 * Return: a pointer to the byte in s that matching accept, or else NULL
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

