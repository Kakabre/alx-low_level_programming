#include <stdlib.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates index marking in a string
 * @str: string
 * Return: index marking
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')

	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts number of words in a string
 * @str: string to be counted
 * Return: number of words contained
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into two
 * @str: string to be split
 * Return: NULL if str == NULL or str == ""
 * returns NULL if function fails
 */

char **strtow(char *str)
{
	char **spi;
	int index = 0, words, w, let, l;

	if (str == NULL || str[0] == '\0')

		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	spi = malloc(sizeof(char *) * (words + 1));
	if (spi == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		let = word_len(str + index);

		spi[w] = malloc(sizeof(char) * (let + 1));
		if (spi[w] == NULL)
		{
			for (; w >= 0; w--)
				free(spi[w]);
			return (NULL);
		}

		for (l = 0; l < let; l++)
			spi[w][l] = str[index++];
		spi[w][l] = '\0';

	}
	spi[w] = NULL;

	return (spi);
}
