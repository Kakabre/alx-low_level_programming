#include <stdlib.h>
#include "main.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: pointer to the head node of linked list
 * Return: size_t, num of nodes in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
