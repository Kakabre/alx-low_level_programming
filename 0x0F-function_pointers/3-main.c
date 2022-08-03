#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"



/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, calc;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = (*get_op_func)(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	calc = (*op)(num1, num2);
	printf("%d\n", calc);

	return (0);
}
