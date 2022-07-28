#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;
	{
		if (argc != 3)
			printf("Error\n");
		exit(98);
	}
	
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);

		return (0);
	}
}
