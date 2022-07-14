#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int k = 0;

	while (k == 0)
	{
		if ((*(s1 + j) == '\0') && (*(s2 + j) == '\0'))
				break;
		{
				k = *(s1 + j) - *(s2 + j);
				j++;
		}
				}
				return (k);
				}
