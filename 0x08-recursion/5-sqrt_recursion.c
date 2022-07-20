#include "main.h"

int find_sqrt(int n, int r);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @n: given integer
 * @r: square root
 * Return: natural square root of n
 */

int find_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	if (r == n / 2)
		return (-1);

return (find_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, r));
}
