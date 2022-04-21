#include "lists.h"

/**
 * list_len - will return the number of elements in a linked list_t
 * @h: value of  the leng str
 * Return: length of linked list
 */

size_t list_len(const list_t *h)
{
	size_t l;

	for (l = 0; h != NULL; l++)
	{
		h = h->next;
	}
	return (l);
}
