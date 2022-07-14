#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string
 * Return: dest
 */

char *leet(char *s)
{
	int count = 0, a;
	int low_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + count) == low_case[a] || *(s + count) == upper_case[a])
			{
				*(s + count) = num[a];
				break;
			}
		}
		count++;
	}
	return (s);
}
