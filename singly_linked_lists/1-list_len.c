#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: pointer of elements
 * Return: i
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;

		h = h->next;

	}

	return (i);

}
