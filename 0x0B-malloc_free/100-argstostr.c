#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates the argument of a program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL
 * or to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i, j, n, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	ar = malloc(sizeof(char) * size + 1);

	if (ar == NULL)
		return (NULL);

	n = 0;

	for (i = 0; i < ac; i++)

	{
		for (j = 0; av[i][j] != '\0'; j++)
			ar[n++] = av[i][j];
		ar[n++] = '\n';
	}
	ar[n] = '\0';
	
	return (ar);
}
