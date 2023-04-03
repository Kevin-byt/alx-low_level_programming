#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: the string
 * @needle: the substring to locate
 * Return: A pointer to the beginning of the located substring, otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}



