#include <stdio.h>

/**
 * main- prints the first 98 fibonacci numbers, starting qith
 * 1 ans 2, seperated by a comma, followed by a space
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib 2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2

		for (count = 0; count < 92; count++)
		{
			sum = fib1 + fib2;
			printf("%lu, ", sum);

			fib1 = fib2;
			fib2 = sum;
		}

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half1 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half_1 = fib1_half1 + fib2_half1;
		half_2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 % = 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}