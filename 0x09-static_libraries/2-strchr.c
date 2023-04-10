#include "main.h"

/**
 * _strchr - gets a character in a string
 * @s: input string
 * @c: character to find
 * Return: The wors with the character, else 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

