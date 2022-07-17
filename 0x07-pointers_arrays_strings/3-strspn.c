#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment of byte
 * @accept: only bytes
 * Return: d
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int d = 0;

	for (a = 0; s[a] != '\n'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					d++;
			}
		}
		else
			return (d);
	}
	return (d);
}
