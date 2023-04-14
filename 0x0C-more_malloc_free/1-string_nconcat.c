#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: first string
 * @s2: string to append to 1st string
 * @n: number of bytes in s2 appendded to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len_s1 = 0, len_s2 = 0;

	while (s1 && s1[len_s1])
		len_s1++;
	while (s2 && s2[len_s2])
		len_s2++;

	if (n < len_s2)
		s = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		s = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (!s)
		return (NULL);

	while (i < len_s1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len_s2 && i < (len_s1 + n))
		s[i++] = s2[j++];

	while (n >= len_s2 && i < (len_s1 + len_s2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

