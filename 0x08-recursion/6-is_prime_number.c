#include "main.h"

int is_divisible(int n, int d);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @n: number to be divided
 * @d: divisor
 * Return: 0 if n is divisible and
 * -1 if otherwise
 */

int is_divisible(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);

	return (is_divisible(n, d + 1));
}

/**
 * is_prime_number - determines a prime number
 * @n: integer
 * Return: 1 if n is a prime number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
	
	return (is_divisible(n, d));

}
