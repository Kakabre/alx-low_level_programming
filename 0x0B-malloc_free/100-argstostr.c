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
	int i, j, k = 0;
	int n, m;
	int count = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}

	count++;/**to account for \n that would be added later*/
	ar = malloc(sizeof(char) * count);
	if (ar == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)

	{
		for (m = 0; av[m][n] != '\0'; m++)
		{
			ar[k] = av[m][n];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
