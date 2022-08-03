#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

///
// op_add - returns the sum of two numbers
// @a: the first number
// @b: the second number
// Return: the sum of a and b
/

int op_add(int a, int b)
{
	return (a + b);
}

//
// op_sub - returns the differenxe of two numbers
// @a: the first number
// @b: the second number
// Return: the difference of a and b
/

int op_sub(int a, int b)
{
	return (a - b);
}

//
// op_mul - multiplies two numberd
// @a: first number
// @b: second number
// Result: the product of a and b
/

int op_mul(int a, int b)
{
	return (a * b);
}

//
// op_div - divides two numbers
// @a: first number
// @b: second number
// Return: dividend of a and b
/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

//
// op_mod - returns the remainder of a division
// @a: first number
// @b: second number
// Return: remainder of dividing a and b
/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

