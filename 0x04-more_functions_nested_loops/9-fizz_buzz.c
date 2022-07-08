#include <stdio.h>

/**
 * main - Prints 1 - 100. Replaces multiples of 3 with Fizz; 5 with buzz
 * 3 and 5 with fizzbuzz
 * Each number and word is seperated by a space
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", fizzbuzz);

		else if ((i % 3) == 0)
			printf("%s ", fizz);

		else if ((i % 5) == 0)
		{
			if (i == 100)
				printf("%s", buzz);
			else
				printf("%s ", buzz);
		}
		else
			printf("%i ", i);
	}

	putchar('\n');

	return (0);
}
