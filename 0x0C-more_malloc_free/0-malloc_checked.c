#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);

	return (d);
}
