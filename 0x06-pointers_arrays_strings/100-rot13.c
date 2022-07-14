#include "main.h"

/**
 * rot13 - encodes a string
 * @s: string
 * Return: void
 */

char *rot13(char *s)
{
	int count = 0, a;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + count) == alpha[a])
			{
				*(s + count) = rot13[a];
			break;
		}
	}
	count++;
	}
	return (s);
}
