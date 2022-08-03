#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @cmp: is a pointer to the function used to compare values
 * @array: array
 * Return: the first index of the element
 * for which cmp does not return zero
 * if no element matches and size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*cmp)(int);

	{
		if (size <= 0 || array == NULL || cmp == NULL)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
