#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring or
 * NULL if none is found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
	if (a != s)
		haystack++;
	else
		return (needle);
	}
	return (NULL);
}
