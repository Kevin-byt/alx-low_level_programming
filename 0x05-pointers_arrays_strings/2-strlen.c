#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: The string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
