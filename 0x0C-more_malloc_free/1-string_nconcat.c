#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: pointer pointing to the newly allocated space
 * in memory containing s1, followed by first n bytes of
 * s2 and null terminated
 * if function fails, return NULL, if NULL is passed
 * treat as an empty string
 * if n is >= s2, then use s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *boa;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		a++;
	for (b = 0; s2[b] != '\0'; b++)
		b++;

	if (n >= b)
		n = b;

	c = a + n;
	boa = malloc(sizeof(char) * (a + n + 1);

	if (boa == NULL)
		return (NULL);


	for (c = 0; c < a; c++)
	{
	boa[c] = s1[c];
	}

	for (d = 0; d < n, d++)
	{
	boa[d + c] = s2[d];
	}
	boa[d] = '\0';

	return (boa);
}
