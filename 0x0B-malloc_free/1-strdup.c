#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: string given as parameter
 * Return: NULL if str = NULL
 * on success, it returns pointer to duplicated string
 * and NULL if theres insuffucient space
 */

char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int b;
	unsigned int length = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length) != '\0')
		length++;

	length++;

	alloc_mem = malloc(sizeof(*str) * (length));

	if (alloc_mem == NULL)
		return ('\0');

	for (b = 0; b < length; b++)
		alloc_mem[b] = *(str + b);

	alloc_mem[b] = '\0';

	return (alloc_mem);
}
