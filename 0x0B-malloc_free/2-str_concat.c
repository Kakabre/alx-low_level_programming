#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string one
 * @s2: string two
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *hero;
	int string, concat_string = 0, zen = 0;

	{
		if (s2 == NULL)
			s2 = " ";

		for (string = 0; s1[string] || s2[string]; string++)
			zen++;
	}

	{
		hero = malloc(sizeof(char) * zen);
		if (hero == NULL)
			return (NULL);
	}
	{
		for (string = 0; s1[string]; string++)
			hero[concat_string++] = s1[string];
		{
			for (string = 0; s2[string]; string++)
				hero[concat_string++] = s2[string];
		}
	}
	return (hero);
}
