#include <stdio.h>

/**
 * main - writes 00-99
 * Description: writes all unique combinations
 * Return: 0 for Success
 */

int main(void)
{
	int i, j;
	
	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0')

					for (i ! = 98 || j ! = 99) 
					{
						putchar(',');
						{
							putchar (' ');
						}
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

