#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using amlloc
 * @nmemb: number of elements to be arrayed
 * @size: size if bytes
 *
 * Return: pointer to the allocated string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		s[j] = 0;

	return (s);
}
