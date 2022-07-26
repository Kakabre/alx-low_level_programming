#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: NULL if size = 0 or
 * pointer to the array if NULL fails
 */

char *create_array(unsigned int size, char c)
{
	char *mal;
	unsigned int m;

	if (size == 0)
		return ('\0');

	mal = malloc(size);
	if (mal == NULL)
		return ('\0');
	{

	for (m = 0; m < size; m++)
		mal[m] = c;

	mal[size] = '\0';
	}

	return (mal);
}
