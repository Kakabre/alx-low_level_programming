#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter
 * on each eñement of an array
 * @size: size of the array
 * @array: integer
 * @action: pointer to the function to be used
 * Rerurn: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
